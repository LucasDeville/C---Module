/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:35:37 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:34:44 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 150, 0){

	this->_target = "ShrubberyCreationForm";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
: AForm("ShrubberyCreationForm", 145, 137) {

	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {

	if (this != &src)
		this->_target = src._target;
	*this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {

	if (this != &src)
		this->_target = src._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

void	ShrubberyCreationForm::execute(BureauCrat const & executor) const {

	if (!this->getSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executed " << this->_target << std::endl;
		std::ofstream	file;
		file.open(this->_target + "_shrubbery");
        file << "                                                 ." << std::endl;
        file << "                                      .         ; " << std::endl; 
        file << "         .              .              ;%     ;;   " << std::endl;
        file << "           ,           ,                :;%  %;   " << std::endl;
        file << "            :         ;                   :;%;'     .,   " << std::endl;
        file << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
        file << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        file << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        file << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        file << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        file << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        file << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
        file << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
        file << "                `@%.  `;@%.      ;@@%;         " << std::endl;
        file << "                  `@%%. `@%%    ;@@%;        " << std::endl;
        file << "                    ;@%. :@%%  %@@%;       " << std::endl;
        file << "                      %@bd%%%bd%%:;     " << std::endl;
        file << "                        #@%%%%%:;;" << std::endl;
        file << "                        %@@%%%::;" << std::endl;
        file << "                        %@@@%(o);  . '         " << std::endl;
        file << "                        %@@@o%;:(.,'         " << std::endl;
        file << "                    `.. %@@@o%::;         " << std::endl;
        file << "                       `)@@@o%::;         " << std::endl;
        file << "                        %@@(o)::;        " << std::endl;
        file << "                       .%@@@@%::;         " << std::endl;
        file << "                       ;%@@@@%::;.          " << std::endl;
        file << "                      ;%@@@@%%:;;;. " << std::endl;
        file << "                  ...;%@@@@@%%:;;;;,..    " << std::endl;
		file.close();
	}
}