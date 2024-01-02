/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:33:19 by ldeville          #+#    #+#             */
/*   Updated: 2024/01/02 13:30:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include "common.hpp"

class BureauCrat {

private:

	const std::string	_name;
	int					_grade;

public:

	BureauCrat(void);
	BureauCrat(const std::string name);
	BureauCrat(BureauCrat const & src);
	~BureauCrat(void);

	BureauCrat& 			operator=(BureauCrat const & src);
	const std::string	getName(void) const;
	int 				getGrade(void) const;
	void				setGrade(int grade);
	void				upGrade(void);
	void				downGrade(void);

	class GradeTooHighException : public std::exception {
		public:
		virtual const char* what() const throw() {
			return ("This bureaucrat can't grade below 1 because it's already the highest !");
		}
	};
	 
	class GradeTooLowException : public std::exception {
		public:
		virtual const char* what() const throw() {
			return ("This bureaucrat can't grade above 150 because it's already the lowest !");
		}
	};	
};

std::ostream& operator<<(std::ostream & o, BureauCrat const & src);

#endif