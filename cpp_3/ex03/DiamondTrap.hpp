/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 09:53:49 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:
	std::string	_name;

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap(void);

	DiamondTrap& 	operator=(DiamondTrap const & src);
	using 		ScavTrap::attack;
	using		ClapTrap::setName;
	void 		whoAmI(void);

};