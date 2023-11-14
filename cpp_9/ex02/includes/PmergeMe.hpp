/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:10:31 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/14 09:45:08 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include "common.hpp"

template<typename T>
class PmergeMe {

private:

	T	_stack;

public:

	PmergeMe(void) { };
	PmergeMe(PmergeMe const & src);
	~PmergeMe(void) { };

	PmergeMe&	operator=(PmergeMe const & src);
	void		setArg(char** arg);
	void		displayResult(void);
	void		sort(void);

};

#endif