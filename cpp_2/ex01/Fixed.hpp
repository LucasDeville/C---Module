/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:57 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/25 17:34:50 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					_num;
	static const int	_f_num = 8;

public:

	Fixed(void);
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed& operator=(Fixed const & src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream&	operator<<(std::ostream&  o, Fixed const & src);

#endif
