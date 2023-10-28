/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 09:17:29 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain {

private:

	std::string	_ideas[100];

public:

	Brain(void);
	Brain(Brain const & src);
	~Brain(void);

	Brain& 		operator=(Brain const & src);
	void		setIdeas(std::string ideas[100]);
	void 		printIdeas(void) const;

};