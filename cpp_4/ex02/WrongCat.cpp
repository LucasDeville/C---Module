/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/30 10:17:23 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"

WrongCat::WrongCat(void) {

	if (DEBUG)
		std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(WrongCat const & src) {
	
	if (DEBUG)
		std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void) {

	if (DEBUG)
		std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & src) {
	
	if (DEBUG)
			std::cout << "WrongCat Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Miaou !" << std::endl;
}
