/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 17:24:41 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
	_HP = 10;
	_EP = 10;
	_Damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
	
	if (DEBUG)
		std::cout << "Name constructor called" << std::endl;
	_HP = 10;
	_EP = 10;
	_Damage = 0;
}

ClapTrap(ClapTrap const & src) {
	
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

~ClapTrap(void) {

	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

std::string	ClapTrap::getName(void) {
	return this->_name;
}

int	ClapTrap::getHP(void) {
	return this->_HP;
}

int	ClapTrap::getEP(void) {
	return this->_EP
}

int	ClapTrap::getDamage(void) {
	return this->_damage;
}

ClapTrap& operator=(ClapTrap const & src) {
	if (this != &src)
	{
		this->_name = src.getName();
		this->_HP = src.getHP();
		this->_EP = src.getEP();
		this->_damage = src.getDamage();
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {

	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount);