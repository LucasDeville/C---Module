/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 10:31:15 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {

	if (DEBUG)
		std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
}

Character::Character(std::string const & name) {
	if (DEBUG)
		std::cout << "Character Default assignement constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
	this->_name = name;
}

Character::Character(Character const & src) {
	
	if (DEBUG)
		std::cout << "Character Copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void) {

	if (DEBUG)
		std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete _inv[i];
}

Character& Character::operator=(Character const & src) {
	
	if (DEBUG)
			std::cout << "Character Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			this->_inv[i] = src._inv[i]->clone();
		this->_name = src._name;
	}
	return *this;
}

std::string const & Character::getName(void) const{
	return this->_name;
}

void Character::equip(AMateria* m) {

	int	i = 0;
	while (i < 4 && this->_inv[i])
		i++;
	if (i < 4)
		this->_inv[i] = m;
}

void Character::unequip(int idx) {

	if (this->_inv[idx])
	{
		delete _inv[idx];
		this->_inv[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target) {

	if (this->_inv[idx])
		this->_inv[idx]->use(target);
	else
		std::cout << "There is no materia at this emplacement !" << std::endl;
}