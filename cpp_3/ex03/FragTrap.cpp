/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:35 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	if (DEBUG)
		std::cout << "FragTrap Default constructor called" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setDamage(30);
}

FragTrap::FragTrap(std::string name) {
	
	if (DEBUG)
		std::cout << "FragTrap Name constructor called" << std::endl;
	this->setName(name);
	this->setHP(100);
	this->setEP(100);
	this->setDamage(30);
}

FragTrap::FragTrap(FragTrap const & src) {
	
	if (DEBUG)
		std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void) {

	if (DEBUG)
		std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & src) {
	
	if (DEBUG)
			std::cout << "FragTrap Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setEP(src.getEP());
		this->setDamage(src.getDamage());
	}
	return *this;
}

void FragTrap::attack(const std::string& target) {

	if (this->getHP() <= 0 || this->getEP() <= 0)
	{
		if (this->getHP() <= 0)
			std::cout << "FragTrap is already dead !" << std::endl;
		else if (this->getEP() <= 0)
			std::cout << "FragTrap got no more energy and can't attack..." << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	
	if (this->getHP() <= 0)
	{
		std::cout << "FragTrap is already dead !" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->getName() << " take " << amount << " points of damage!" << std::endl;
	this->setHP(this->getHP() - amount);
	if (this->getHP() <= 0)
		std::cout << "FragTrap died from this attack !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {

	if (this->getHP() <= 0 || this->getEP() <= 0)
	{
		if (this->getHP() <= 0)
			std::cout << "FragTrap is already dead !" << std::endl;
		else if (this->getEP() <= 0)
			std::cout << "FragTrap got no more energy and can't repair himself..." << std::endl;
		return;
	}
	this->setEP(this->getEP() - 1);
	std::cout << "FragTrap " << this->getName() << " repaired himsfelf and gain " << amount << " HP! (Energy:" << this->getEP() << "/100)" << std::endl;
	this->setHP(this->getHP() + amount);
}


void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " want to high fives with someone !" << std::endl;
}
