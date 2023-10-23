/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:26:41 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/22 12:37:29 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {
	 std::cout << "Creating zombie without a name" << std::endl;
}

Zombie::Zombie (std::string str) : _name(str) { 
	announce();
}

Zombie::~Zombie (void) {
	std::cout << "Destroying zombie named " << _name << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

Zombie*	Zombie::newZombie(std::string name) {
	return (new Zombie(name));
}