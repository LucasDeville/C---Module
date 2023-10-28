/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:12:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	if (DEBUG)
		std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) {
	
	if (DEBUG)
		std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {

	if (DEBUG)
		std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(Dog const & src) {
	
	if (DEBUG)
			std::cout << "Dog Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Bark !" << std::endl;
}

void	Dog::setIdeas(std::string ideas[100]) {

	this->_brain->setIdeas(ideas);
}

void	Dog::printIdeas(void) {

	this->_brain->printIdeas();
}

