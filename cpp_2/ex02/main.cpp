/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/22 17:45:22 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	
	std::cout << "	~SUBJECT TEST~	" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "	~TEST~	" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "a > b - " << (a > b ? "YES" : "NO") << std::endl;
	std::cout << "a < b - " << (a < b ? "YES" : "NO") << std::endl;
	std::cout << "a >= b - " << (a >= b ? "YES" : "NO") << std::endl;
	std::cout << "a <= b - " << (a <= b ? "YES" : "NO") << std::endl;
	std::cout << "a == b - " << (a == b ? "YES" : "NO") << std::endl;
	std::cout << "a != b - " << (a != b ? "YES" : "NO") << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "5 / 10 = " << (Fixed( 5.0f ) / Fixed( 2 )) << std::endl;
	std::cout << "min :" << Fixed::min( a, b ) << std::endl;
	std::cout << "max :" << Fixed::max( a, b ) << std::endl;


	return 0;
}
