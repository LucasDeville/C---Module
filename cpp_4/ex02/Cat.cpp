/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:12:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	if (DEBUG)
		std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) {
	
	if (DEBUG)
		std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {

	if (DEBUG)
		std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const & src) {
	
	if (DEBUG)
			std::cout << "Cat Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaouu !" << std::endl;
}

void	Cat::setIdeas(std::string ideas[100]) {

	this->_brain->setIdeas(ideas);
}

void	Cat::printIdeas(void) {

	this->_brain->printIdeas();
}
