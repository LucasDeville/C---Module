/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:28 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/25 17:35:05 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : _num( num << _f_num ) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : _num(roundf(num * (1 << _f_num ))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const & src) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		this->_num = src.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return (this->_num);
}

void	Fixed::setRawBits(int const raw) {
	this->_num = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_num / (1 << _f_num));
}

int		Fixed::toInt(void) const {
	return (this->_num >> this->_f_num);
}

std::ostream&	operator<<(std::ostream&  o, Fixed const & src) {
	o << src.toFloat();
	return o;
}
