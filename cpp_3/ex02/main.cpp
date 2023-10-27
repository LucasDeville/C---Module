/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 09:57:18 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	
	ClapTrap c1("Marc");
	FragTrap c2;
	ScavTrap c3("Tom");

	c3.takeDamage(100);
	c3.beRepaired(100);
	c3.takeDamage(101);
	c3.takeDamage(1000);
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
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.beRepaired(1);
	c2.attack("Marc");

	return 0;
}
