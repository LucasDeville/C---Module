/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 10:05:21 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	
	ClapTrap c1("Marc");
	ScavTrap c2;
	ScavTrap c3("Tom");

	c3.takeDamage(101);
	c2.setName("Timmy");
	c1.setDamage(8);
	c1.attack(c2.getName());
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.attack("Marc");

	return 0;
}
