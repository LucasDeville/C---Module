/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:33:42 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/23 10:25:48 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA () {

}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}