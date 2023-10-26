/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 16:39:15 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void) {
	
	Fixed x(5);
	Fixed y(0);
	Point p(x, y);

	Fixed x1(0);
	Fixed y1(-1);	
	Fixed x2(5);
	Fixed y2(5);	
	Fixed x3(10);
	Fixed y3(-1);
	Point p1(x1, y1);
	Point p2(x2, y2);
	Point p3(x3, y3);

	if (bsp(p1, p2, p3, p))
		std::cout << "Le point " << p << " fait partie du triangle." << std::endl;
	else
		std::cout << "Le point " << p << " ne fait pas partie du triangle." << std::endl;

	Point t(Fixed(5), Fixed(-1));
	if (bsp(p1, p2, p3, t))
		std::cout << "Le point " << t << " fait partie du triangle." << std::endl;
	else
		std::cout << "Le point " << t << " ne fait pas partie du triangle." << std::endl;

	return 0;
}
