/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:34:40 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 16:18:19 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


const Fixed calcArea(Point const a, Point const b, Point const c) {
	Fixed calc;

	calc = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (calc < 0)
		calc = calc * -1;
	return calc;
}

bool isOnLine(Point const a, Point const b, Point const p) {
    return (b.getY() - a.getY()) * (b.getX() - a.getX()) == (p.getY() - a.getY()) * (p.getX() - a.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	
	Fixed base = calcArea(a, b, c);

	if (isOnLine(a, b, point) || isOnLine(b, c, point) || isOnLine(a, c, point))
        return false;
	else if (base.getRawBits() != (calcArea(point, a, b).getRawBits() + calcArea(point, b, c).getRawBits() + calcArea(point, a, c).getRawBits()))
		return false;
	return true;
}
