/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:12:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	if (DEBUG)
		std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const & src) {
	
	if (DEBUG)
		std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) {

	if (DEBUG)
		std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const & src) {
	
	if (DEBUG)
			std::cout << "Animal Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void		Animal::makeSound() const {
	if (type == "Dog")
		std::cout << "Bark !" << std::endl;
	else if (type == "Cat")
		std::cout << "Miaouu !" << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}
