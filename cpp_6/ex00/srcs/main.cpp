/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:25:05 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 17:13:17 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "Error: Please entre a valid comand './convert <number>'" << std::endl;
		return (-1);
	}

	ScalarConverter conv(argv[1]);

	/*std::cout << "char: " << conv.getChar() << std::endl;
	std::cout << "int: " << conv.getChar() << std::endl;
	std::cout << "float: " << conv.getFloat() << std::endl;
	std::cout << "double: " << conv.getDouble() << std::endl;*/

}