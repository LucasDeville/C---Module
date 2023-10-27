/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 09:07:07 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void) {
	
	ClapTrap c1("Marc");
	ClapTrap c2;
	ClapTrap c3(c2);

	c3 = c1;
	c3.attack("Timmy");
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

	return 0;
}
