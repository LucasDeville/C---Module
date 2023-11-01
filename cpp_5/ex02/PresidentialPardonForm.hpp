/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:33:19 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:38:43 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "common.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

private:

	std::string	_target;

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);

	PresidentialPardonForm& 			operator=(PresidentialPardonForm const & src);
	void							execute(BureauCrat const & executor) const;	
};

#endif