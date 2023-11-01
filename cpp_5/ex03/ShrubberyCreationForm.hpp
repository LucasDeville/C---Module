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

#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "common.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

private:

	std::string	_target;

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm& 			operator=(ShrubberyCreationForm const & src);
	void							execute(BureauCrat const & executor) const;	
};

#endif