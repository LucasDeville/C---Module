/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/29 14:46:55 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const bool	DEBUG = true;

class ClapTrap {

protected:

	std::string	_name;
	int			_HP;
	int			_EP;
	int			_damage;

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap& 	operator=(ClapTrap const & src);
	std::string	getName(void) const;
	int			getHP(void) const;
	int			getEP(void) const;
	int			getDamage(void) const;
	void		setName(std::string name);
	void		setHP(int amount);
	void		setEP(int amount);
	void		setDamage(int amount);
	void 		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);

};