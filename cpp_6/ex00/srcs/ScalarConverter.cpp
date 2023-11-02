/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:37:47 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/02 14:25:50 by ldeville         ###   ########.fr       */
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
	
	std::string txt = static_cast<std::string>(str);
	int		contain_pseudo = -1;
	int		conv_int = 0;
	float	conv_float = 0;
	double	conv_double = 0;
	
	const std::string	pseudo_litteral[6] = {"-inff", "-inf", "nanf", "nan", "+inff", "+inf"};

	for (int i = 0; i < 6; i++)
		if (txt == pseudo_litteral[i])
			contain_pseudo = i;
	
	if (isChar(txt))
	{
		std::cout << "char: '" << txt[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(txt[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(txt[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(txt[0]) << ".0" << std::endl;
	}
	else if (isInt(txt))
	{
		conv_int = atoi(str);
		if (isprint(conv_int))
			std::cout << "char: '" << static_cast<char>(conv_int) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << conv_int << std::endl;
		std::cout << "float: " << static_cast<float>(conv_int) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(conv_int) << ".0" << std::endl;
	}
	else if (isFloat(txt))
	{
		conv_float = atof(str);
		if (isprint(static_cast<float>(conv_float)))
			std::cout << "char: '" << static_cast<char>(conv_float) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(conv_float) << std::endl;
		std::cout << "float: " << conv_float << (conv_float - static_cast<int>(conv_float) == 0 ? ".0f" : "f") << std::endl;
		std::cout << "double: " << static_cast<double>(conv_float) << (conv_float - static_cast<int>(conv_float) == 0 ? ".0" : "") << std::endl;
	}
	else if (isDouble(txt))
	{
		conv_double = atof(str);
		if (isprint(static_cast<float>(conv_double)))
			std::cout << "char: '" << static_cast<char>(conv_double) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(conv_double) << std::endl;
		std::cout << "float: " << static_cast<float>(conv_double) << (conv_double - static_cast<int>(conv_double) == 0 ? ".0f" : "f") << std::endl;
		std::cout << "double: " << conv_double << (conv_double - static_cast<int>(conv_double) == 0 ? ".0" : "") << std::endl;
	}
	else if (contain_pseudo >= 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (contain_pseudo % 2 != 0)
			--contain_pseudo;
		std::cout << "float: " << pseudo_litteral[contain_pseudo] << std::endl;
		std::cout << "double: " << pseudo_litteral[contain_pseudo + 1] << std::endl;
	}
	else
	{
		std::cout << "This conversion is impossible ! Please enter a Char, Int, Float or a Double." << std::endl;
	}
}

bool	ScalarConverter::isChar(std::string txt) {

	if (txt.length() == 1 && !std::isdigit(txt[0]) && std::isprint(txt[0]))
		return true;
	return false;
}

bool	ScalarConverter::isInt(std::string txt) {

	for (unsigned int i = 0; i < txt.length(); i++)
		if (!std::isdigit(txt[i]))
			return false;
	return true;
}

bool	ScalarConverter::isFloat(std::string txt) {

	int length = static_cast<int>(txt.length());
	int found = txt.find('.');
	int found_f = txt.find('f');
	
	if (found == -1 || found_f != length - 1)
		return false;
	for (int i = 0; i < length; i++)
		if (found != i && found_f != i && !std::isdigit(txt[i]))
			return false;
	return true;
}

bool	ScalarConverter::isDouble(std::string txt) {

	int length = static_cast<int>(txt.length());
	int found = txt.find('.');
	
	if (found == -1)
		return false;
	for (int i = 0; i < length; i++)
		if (found != i && !std::isdigit(txt[i]))
			return false;
	return true;
}
