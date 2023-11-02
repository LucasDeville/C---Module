/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:33:04 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/02 14:14:20 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
#define __SCALARCONVERTER_HPP__

#include "common.hpp"

class ScalarConverter {

private:

	std::string			_origin;

public:

	ScalarConverter(void);
	ScalarConverter(char *str);
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter(void);

	ScalarConverter&	operator=(ScalarConverter const & src);
	static void			convert(char *str);
	static bool			isChar(std::string txt);
	static bool			isInt(std::string txt);
	static bool			isFloat(std::string txt);
	static bool			isDouble(std::string txt);

};

#endif