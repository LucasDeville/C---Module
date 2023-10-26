/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:28 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 16:39:43 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {
	if (DEBUG)
		std::cout << "Int constructor called" << std::endl;
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY()){
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void) {
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

Point&	Point::operator=(Point const & src) {
	if (DEBUG)
		std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

Fixed const	Point::getX(void) const {
	return this->_x;
}

Fixed const	Point::getY(void) const{
	return this->_y;
}

std::ostream&	operator<<(std::ostream&  o, Point const & src) {
	o << "(" << src.getX().toFloat() << "," << src.getY().toFloat() << ")";
	return o;
}