/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:10:31 by ldeville          #+#    #+#             */
/*   Updated: 2024/01/09 16:44:57 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include "common.hpp"

typedef std::vector<int> int_vector;

template<typename T>
class PmergeMe {

private:

    typedef typename T::value_type      value_type;
    typedef typename T::size_type       size_type;
	typedef std::pair <value_type, value_type>  type_pair;
    typedef std::vector <type_pair>             pair_vector;
	
	T			_stack;
	value_type  _last;
	double		_time;
	
	pair_vector generate_pairs(T &data);
	int_vector  generate_indexes(size_t n);
    void        sort_pairs(pair_vector &pairs);
    int         binary_search(int target);

public:

	PmergeMe(void) { };
	PmergeMe(PmergeMe const & src);
	~PmergeMe(void) { };

	PmergeMe&	operator=(PmergeMe const & src);
	void		setArg(char** arg);
	void		displayResult(void);
	void		sort(void);
	void		time() const;

};

#endif