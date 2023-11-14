/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:54:27 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/13 14:21:51 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__RPN_HPP__
#define	__RPN_HPP__

#include "common.hpp"

class RPN {

private:

	int						_num;
	std::list<int>			_calc;

public:

	RPN(void);
	RPN(RPN const & src);
	~RPN(void);

	RPN&	operator=(RPN const & src);
	void	calc(char* str);
	void	init_stack(char* str);
	int		math(int a, int b, int op);

};

#endif