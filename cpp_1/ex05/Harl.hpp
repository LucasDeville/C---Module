/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:28:09 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/23 11:32:01 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__HPP__
#define __HARL__HPP__

#include <iostream>

class Harl {

private:

	void	debug();
	void	info();
	void	warning();
	void	error();

public:

	Harl::Harl();
	Harl::~Harl();

};

#endif