/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:25:11 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 11:05:07 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "common.hpp"

class Ice : public AMateria {
	
private:

public:

	Ice(void);
	Ice(Ice const & src);
	~Ice(void);

	Ice&		operator=(Ice const & src);
	AMateria*	clone(void) const;
	void 		use(ICharacter& target);

};

#endif