/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:12:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain(void) {

	if (DEBUG)
		std::cout << "Brain Default constructor called" << std::endl;
	
	std::string init[100] = {"*Empty thought*"};
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = init[i];
}

Brain::Brain(Brain const & src) {
	
	if (DEBUG)
		std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void) {

	if (DEBUG)
		std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const & src) {
	
	if (DEBUG)
			std::cout << "Brain Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return *this;
}

void	Brain::setIdeas(std::string ideas[100]) {

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}

void Brain::printIdeas(void) const {

	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i];
	std::cout << std::endl;
}
