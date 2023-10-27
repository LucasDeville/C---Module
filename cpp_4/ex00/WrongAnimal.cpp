/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:12:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"

WrongAnimal::WrongAnimal(void) {

	if (DEBUG)
		std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	
	if (DEBUG)
		std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {

	if (DEBUG)
		std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src) {
	
	if (DEBUG)
			std::cout << "WrongAnimal Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void		WrongAnimal::makeSound() const {
	std::cout << "*Wrong animal sound* !" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}
