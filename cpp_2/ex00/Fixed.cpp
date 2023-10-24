/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:28 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/24 13:17:56 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : _num(num) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy assignement operator called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

void	Fixed::setRawBits(int const raw) {
	this->_num = raw;
}
