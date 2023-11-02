/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:25:05 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/02 14:19:07 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "Error: Please entre a valid comand './convert <literal>'" << std::endl;
		return (-1);
	}
	ScalarConverter::convert(argv[1]);
	
	return (0);
}