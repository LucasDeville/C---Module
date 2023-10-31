/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 10:04:44 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	if (DEBUG)
		std::cout << "ClapTrap Default constructor called" << std::endl;
	_HP = 10;
	_EP = 10;
	_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	
	if (DEBUG)
		std::cout << "ClapTrap Name constructor called" << std::endl;
	_HP = 10;
	_EP = 10;
	_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	
	if (DEBUG)
		std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {

	if (DEBUG)
		std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return this->_name;
}

int	ClapTrap::getHP(void) const {
	return this->_HP;
}

int	ClapTrap::getEP(void) const {
	return this->_EP;
}

int	ClapTrap::getDamage(void) const {
	return this->_damage;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHP(int amount) {
	this->_HP = amount;
}

void	ClapTrap::setEP(int amount) {
	this->_EP = amount;
}

void	ClapTrap::setDamage(int amount) {
	this->_damage = amount;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & src) {
	
	if (DEBUG)
			std::cout << "ClapTrap Copy assignement operator called" << std::endl;
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

	if (this->_HP == 0 || this->_EP == 0)
	{
		if (this->_HP == 0)
			std::cout << "ClapTrap is already dead !" << std::endl;
		else if (this->_EP == 0)
			std::cout << "ClapTrap got no more energy and can't attack..." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (this->_HP == 0)
	{
		std::cout << "ClapTrap is already dead !" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	this->_HP -= amount;
	if (this->_HP <= 0)
		std::cout << "ClapTrap died from this attack !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_HP == 0 || this->_EP == 0)
	{
		if (this->_HP == 0)
			std::cout << "ClapTrap is already dead !" << std::endl;
		else if (this->_EP == 0)
			std::cout << "ClapTrap got no more energy and can't repair himself..." << std::endl;
		return;
	}
	this->_EP -= 1;
	std::cout << "ClapTrap " << this->_name << " repaired himsfelf and gain " << amount << " HP! (Energy left:" << this->_EP << ")" << std::endl;
	this->_HP += amount;
}
