/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:23:33 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/23 11:30:58 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA {

private:

	std::string	_name;
	Weapon*		_weapon;

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack() const;
};

#endif