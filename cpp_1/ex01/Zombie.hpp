/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:26:51 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/22 12:39:45 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
private :
	std::string	_name;

public :
	Zombie(void);
	Zombie(std::string str);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);
	Zombie*	newZombie(std::string name);
};

Zombie*	zombieHorde(int n, std::string name);

#endif