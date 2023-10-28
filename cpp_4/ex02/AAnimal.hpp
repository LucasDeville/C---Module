/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 09:41:09 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const bool	DEBUG = true;

class AAnimal {

protected:

	std::string	type;

public:

	AAnimal(void);
	AAnimal(AAnimal const & src);
	virtual ~AAnimal(void);

	AAnimal& 		operator=(AAnimal const & src);
	virtual void	makeSound(void) const = 0;
	std::string		getType() const;
};