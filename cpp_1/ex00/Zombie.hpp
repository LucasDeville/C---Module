/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:26:51 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/19 17:44:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
class Zombie {

private :
	std::string	_name;

public :
	Zombie(std::string str);
	~Zombie(void);

	void	announce(void);
};

Zombie*	newZombie(std::string name);
void 	randomChump( std::string name );

#endif