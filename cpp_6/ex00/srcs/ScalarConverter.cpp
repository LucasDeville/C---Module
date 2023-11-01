/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:37:47 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 18:53:10 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>

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
	
	
	
}
