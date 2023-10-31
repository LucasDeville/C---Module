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

#ifndef __AFORM_HPP__
#define __AFORM_HPP__

#include "common.hpp"
#include "BureauCrat.hpp"

class BureauCrat;

class AForm {

private:

	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	const int			_exec_grade;

public:

	AForm(void);
	AForm(const std::string name, const int sign_grade, const int exec_grade);
	AForm(AForm const & src);
	~AForm(void);

	AForm&				operator=(AForm const & src);
	const std::string	getName(void) const;
	int					getSignedGrade(void) const;
	int					getExecGrade(void) const;
	bool				getSigned(void) const;
	void				beSigned(BureauCrat const & src);
	virtual void		execute(BureauCrat const & executor) const = 0;

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

	class FormNotSignedException : public std::exception {
		public:
		virtual const char* what() const throw() {
			return ("the form is not signed !");
		}
	};
};

std::ostream& operator<<(std::ostream & o, AForm const & src);

#endif