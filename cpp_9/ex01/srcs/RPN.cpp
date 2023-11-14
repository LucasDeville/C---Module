/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:48 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/13 15:09:33 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {

}

RPN::RPN(RPN const & src) {
	
	*this = src;
}

RPN::~RPN(void) {

}

RPN&	RPN::operator=(RPN const & src) {

	if (this != &src)
	{
		this->_num = src._num;
		this->_calc.clear();
		std::copy(src._calc.begin(),  src._calc.end(), std::back_inserter(this->_calc));
	}
	return *this;
}

int	RPN::math(int a, int b, int op)
{
	switch (op)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '/':
			return a / b;
		case '*':
			return a * b;
		default:
			std::cout << a << b << op << "Error: Accepted token are only '+ - / *'" << std::endl;
			exit(EXIT_FAILURE);
	}
}

void	RPN::calc(char* str) {

	int a = 0;
	this->_num = 0;

	init_stack(str);

	std::list<int>::iterator it = this->_calc.begin();
	for (it = this->_calc.begin(); it != this->_calc.end(); ++it)
	{
		if (*it < 10 && a == 0)
			a = *it;
		else if (*it < 10 && a != 0)
		{
			a = math(a, *it, *++it);
			if (*++it < 10)
			{
				this->_num = a;
				a = *it;
			}
			else
			{
				this->_num = math(this->_num, a, *it);
				a = 0;
			}
		}
		else
		{
			this->_num = math(this->_num, a, *it);
			a = 0;
		}
	}
	std::cout << this->_num << std::endl;
}

void	RPN::init_stack(char* str) {

	int	i = 0;
	while (str[i])
	{
		if (str[i + 1] && str[i + 1] != ' ')
		{
			std::cout << "Error" << std::endl;
			exit(EXIT_FAILURE); 
		}
		if (str[i] >= '0' && str[i] <= '9')
			this->_calc.push_back(atoi(&str[i]));
		else
			this->_calc.push_back(static_cast<int>(str[i]));
		if(!str[++i])
			break ;
		i++;
	}
	
	std::list<int>::iterator it = this->_calc.begin();
	if (!(*it < 10) || !(*++it < 10) || *++it < 10)
	{
		std::cout << "Error: The first two arguments must be numbers and then a token" << std::endl;
		exit(EXIT_FAILURE); 
	}
	for (it = this->_calc.begin(); it != this->_calc.end(); ++it)
	{
		if (!(*it < 10) && *it != '+' && *it != '-' && *it != '/' && *it != '*')
		{
			std::cout << "Error: Accepted token are only '+ - / *'" << std::endl;
			exit(EXIT_FAILURE); 
		}
	}
}
