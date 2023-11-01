/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:37:47 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 19:08:15 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {

}

ScalarConverter::ScalarConverter(char *str) {
	
	this->convert(str);
}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {

	*this = src;
}

ScalarConverter::~ScalarConverter(void) {

}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & src) {

	if (this != &src)
		this->_origin = src._origin;
	return *this;
}

void	ScalarConverter::convert(char *str) {
	
	std::string txt = str;
	int			_int = std::stoi(txt);

	if (txt.size() == 1 && !std::isdigit(txt[0]) && std::isprint(txt[0]))
	{
		std::cout << "char: '" << txt[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(txt[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(txt[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(txt[0]) << ".0" << std::endl;
	}
	
	std::cout << _int << std::endl;
	//if ()

	
}
