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

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "common.hpp"
#include "BureauCrat.hpp"

class BureauCrat;

class Form {

private:

	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	const int			_exec_grade;

public:

	Form(void);
	Form(const std::string name, const int sign_grade, const int exec_grade);
	Form(Form const & src);
	~Form(void);

	Form 			operator=(Form const & src);
	const std::string	getName(void) const;
	int					getSignedGrade(void) const;
	int					getExecGrade(void) const;
	bool				getSigned(void) const;
	void				beSigned(BureauCrat const & src);
	void				signForm(BureauCrat const & src, bool got_signed);


	class GradeTooHighException : public std::exception {
		public:
		virtual const char* what() const throw() {
			return ("the grade of the Bureaucrat is too high !");
		}
	};
	 
	class GradeTooLowException : public std::exception {
		public:
		virtual const char* what() const throw() {
			return ("the grade of the Bureaucrat is too low !");
		}
	};	
};

std::ostream& operator<<(std::ostream & o, Form const & src);

#endif