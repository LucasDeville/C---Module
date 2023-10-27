/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:35 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {

	if (DEBUG)
		std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setDamage(30);
}

DiamondTrap::DiamondTrap(std::string name) {
	
	if (DEBUG)
		std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->_name = name;
	ClapTrap::setName(name + "_clap_name");
	this->setHP(100);
	this->setEP(100);
	this->setDamage(30);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	
	if (DEBUG)
		std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void) {

	if (DEBUG)
		std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & src) {
	
	if (DEBUG)
			std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setEP(src.getEP());
		this->setDamage(src.getDamage());
	}
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am a DiamondTrap named " << this->_name << " " << this->getName() << "." << std::endl;
}
