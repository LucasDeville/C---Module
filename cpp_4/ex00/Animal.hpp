/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:25:14 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const bool	DEBUG = true;

class Animal {

protected:

	std::string	type;

public:

	Animal(void);
	Animal(Animal const & src);
	~Animal(void);

	Animal& 	operator=(Animal const & src);
	void		makeSound(void) const;
	std::string	getType() const;
};