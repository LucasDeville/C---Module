/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:54:07 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/22 10:35:59 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon {

private:

	std::string _type;

public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon();

	std::string const getType(void) const;
	void		setType(std::string stype);
	
};

#endif