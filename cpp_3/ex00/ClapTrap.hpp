/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/26 17:24:35 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

const bool	DEBUG = true;

class ClapTrap {

private:

	std::string	_name;
	int			_HP;
	int			_EP;
	int			_damage;

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap& operator=(ClapTrap const & src);
	std::string	ClapTrap::getName(void);
	int	ClapTrap::getHP(void);
	int	ClapTrap::getEP(void);
	int	ClapTrap::getDamage(void);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};