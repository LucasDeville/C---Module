/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:33:42 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/23 10:20:04 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name) {
	this->_name = name;
	this->_isArmed = false;
}

HumanB::~HumanB (void) {

}

void	HumanB::attack(void) const {
	if (!this->_isArmed)
		std::cout << this->_name << " attacks without a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_isArmed = true;
	this->_weapon = &weapon;
}