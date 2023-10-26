/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 11:51:43 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	
	Fixed const x( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed y;
	Point p1;
	Point p2(x, y);
	Point p3;

	p3 = p2;


	std::cout << p1.getX() << std::endl;
	std::cout << p2.getX() << std::endl;
	std::cout << p3.getX() << p3.getY() << std::endl;

	return 0;
}
