/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 10:55:30 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {

	DiamondTrap c1("Steven");

	std::cout << "HP: " << c1.getHP() << " Energy: " << c1.getEP() << " Damage: " << c1.getDamage() << std::endl;
	c1.whoAmI();
	c1.attack("Wind");

	return 0;
}
