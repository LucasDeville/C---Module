/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:28:09 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/24 10:52:22 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__HPP__
#define __HARL__HPP__

#include <iostream>

class Harl {

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	Harl(void);
	~Harl(void);

	std::string	type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	void	complain( std::string level );
};

#endif