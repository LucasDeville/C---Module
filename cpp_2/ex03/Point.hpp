/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:57 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 14:35:39 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include "Fixed.hpp" 

class Point {

private:

	Fixed const	_x;
	Fixed const	_y;

public:

	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(Point const & src);
	~Point(void);

	Point& operator=(Point const & src);
	Fixed const	getX(void) const;
	Fixed const	getY(void) const;
};

std::ostream&	operator<<(std::ostream&  o, Point const & src);

#endif
