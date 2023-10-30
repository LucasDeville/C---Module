/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 09:41:09 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include "ICharacter.hpp"
#include "common.hpp"

class ICharacter;

class AMateria {

protected:

	std::string	type;

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria(void);

	AMateria& 			operator=(AMateria const & src);
	virtual AMateria*	clone(void) const = 0;
	virtual void				use(ICharacter& target);
	std::string			getType() const;
};

#endif