/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 10:31:15 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {

	if (DEBUG)
		std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_stack[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	
	if (DEBUG)
		std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void) {

	if (DEBUG)
		std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_stack[i])
			delete _stack[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src) {
	
	if (DEBUG)
			std::cout << "MateriaSource Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			this->_stack[i] = src._stack[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* src) {

	int	i = 0;
	while (i < 4 && this->_stack[i])
		i++;
	if (i < 4)
		this->_stack[i] = src;
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	int i = 0;
	while (this->_stack[i] && this->_stack[i]->getType() != type)
		i++;
	
	if (this->_stack[i])
		return this->_stack[i]->clone();
	else
	{
		std::cout << "This materia source doesn't exist here !" << std::endl;
		return 0;
	}
}	
