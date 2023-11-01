/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:36:53 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 09:58:43 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:

	const std::string	_form_name[3] = {"robotomy request", "shrubbery request", "presidential request"};

public:

	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	Intern&		operator=(Intern const & src);
	AForm*		makeForm(std::string form_name, std::string target);
};
