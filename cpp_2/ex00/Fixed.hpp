/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:54:57 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/24 13:17:18 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed {

private:

	int					_num;
	static const int	_s_num;

public:

	Fixed(void);
	Fixed(int const num);
	Fixed(Fixed const & src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif