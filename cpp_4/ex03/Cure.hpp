/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:25:11 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 11:02:16 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Cure_HPP__
#define __Cure_HPP__

#include "common.hpp"

class Cure : public AMateria {
	
private:

public:

	Cure(void);
	Cure(Cure const & src);
	~Cure(void);

	Cure&		operator=(Cure const & src);
	AMateria*	clone(void) const;
	void 		use(ICharacter& target);

};

#endif