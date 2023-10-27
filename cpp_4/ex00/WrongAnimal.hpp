/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:25:14 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class WrongAnimal {

protected:

	std::string	type;

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & src);
	~WrongAnimal(void);

	WrongAnimal& 	operator=(WrongAnimal const & src);
	void		makeSound(void) const;
	std::string	getType() const;
};