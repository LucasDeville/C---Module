/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hordeZombie.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:26:41 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/22 12:25:49 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name) {
	
	Zombie	*horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);

	return (horde);
}