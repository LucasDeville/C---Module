/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 10:07:29 by ldeville         ###   ########.fr       */
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

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " want to high fives with someone !" << std::endl;
}
