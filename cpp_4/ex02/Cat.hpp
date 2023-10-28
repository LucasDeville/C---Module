/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 09:44:50 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

class Cat : public AAnimal {

private:

	Brain*	_brain;

public:

	Cat(void);
	Cat(Cat const & src);
	~Cat(void);

	Cat& 	operator=(Cat const & src);
	void	makeSound(void) const;
	void	setIdeas(std::string ideas[100]);
	void	printIdeas(void);
	
};