/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:26:41 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/19 17:51:26 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string str) : _name(str) { 
	std::cout << str << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie (void) {
	std::cout << "Destroying zombie named " << _name << std::endl;
}