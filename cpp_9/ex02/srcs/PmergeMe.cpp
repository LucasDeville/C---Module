/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:18:06 by ldeville          #+#    #+#             */
/*   Updated: 2024/01/09 16:48:16 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
PmergeMe<T>::PmergeMe(PmergeMe<T> const & src) {

	*this = src;
}

template<typename T>
PmergeMe<T>& PmergeMe<T>::operator=(PmergeMe<T> const & src) {

	if (this != &src)
	{

	}
	return *this;
}

template<typename T>
void	PmergeMe<T>::setArg(char** arg) {

	int	i = 0;
	while (arg[i])
		this->_stack.push_back(atoi(arg[i++]));
}


template<typename T>
void	PmergeMe<T>::sort(void) {

	std::clock_t start = std::clock();
    pair_vector pairs = generate_pairs(_stack);
    int_vector insertionIndexes = generate_indexes(_stack.size());

    // If the input is empty, we just need to push the last element
    if (pairs.size() == 0) {
        _stack.push_back(_last);
        _time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
        return;
    }

    sort_pairs(pairs);

    _stack.clear();

    _stack.push_back(pairs[0].second);

    for (size_type i = 0; i < pairs.size(); i++) {
        _stack.push_back(pairs[i].first);
    }

    for (size_t i = 0; i < insertionIndexes.size(); i++)
    {
        if (size_t(insertionIndexes[i] - 1) >= pairs.size()) {
            continue;
        }

        int index = binary_search(pairs[insertionIndexes[i] - 1].second);
        _stack.insert(_stack.begin() + index, pairs[insertionIndexes[i] - 1].second);
    }

    if (_last != -1) {
        int index = binary_search(_last);
        _stack.insert(_stack.begin() + index, _last);
    }

	for(int i = 0; i < 1000000; i++);
	
	_time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
}

template <typename T>
void PmergeMe<T>::sort_pairs(pair_vector &pairs) {
    if (pairs.size() <= 1) {
        return; // Base case: Nothing to sort
    }

    // Divide the vector into two halves
    size_type middle = pairs.size() / 2;
    pair_vector leftHalf(pairs.begin(), pairs.begin() + middle);
    pair_vector rightHalf(pairs.begin() + middle, pairs.end());

    // Recursively sort the two halves
    sort_pairs(leftHalf);
    sort_pairs(rightHalf);

    // Merge the sorted halves
    size_type leftIdx = 0;
    size_type rightIdx = 0;
    size_type idx = 0;

    while (leftIdx < leftHalf.size() && rightIdx < rightHalf.size()) {
        pairs[idx++] = leftHalf[leftIdx].first < rightHalf[rightIdx].first ? leftHalf[leftIdx++] : rightHalf[rightIdx++];
    }

    while (leftIdx < leftHalf.size()) {
        pairs[idx++] = leftHalf[leftIdx++];
    }

    while (rightIdx < rightHalf.size()) {
        pairs[idx++] = rightHalf[rightIdx++];
    }
}

template <typename T>
int PmergeMe<T>::binary_search(int target) {
    int left = 0;
    int right = _stack.size() - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (_stack[middle] == target) {
            return middle;
        } else if (_stack[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return left;
}


template <typename T>
typename PmergeMe<T>::pair_vector PmergeMe<T>::generate_pairs(T &data) {
    pair_vector pairs;

    // If the size of the data is odd, we need to store the last element
    if (data.size() % 2 != 0) {
        _last = data.back();
        data.pop_back();
    }

    for (size_type i = 0; i < data.size(); i += 2) {

        // If the first element is greater than the second, swap them
        if (data[i] < data[i + 1]) {
            std::swap(data[i], data[i + 1]);
        }

        pairs.push_back(std::make_pair(data[i], data[i + 1]));
    }

    return pairs;
}

template <typename T>
int_vector PmergeMe<T>::generate_indexes(size_t size) {
    int_vector indexes;
    int jacobsthalSequence[size + 1];

    jacobsthalSequence[0] = 0;
    jacobsthalSequence[1] = 1;
    int lastJacobsthalNumber = 2;

    for (size_t i = 2; indexes.size() < size; i++)
    {
        // Generate the next Jacobsthal number
        jacobsthalSequence[i] = jacobsthalSequence[i - 1] + 2 * jacobsthalSequence[i - 2];

        // Push the jacobsthal number
        i != 2 ? indexes.push_back(jacobsthalSequence[i]) : (void)0;

        // Push back the indexes between the last Jacobsthal number and the current one
        for (int j = jacobsthalSequence[i] - 1; j > lastJacobsthalNumber; j--)
            indexes.push_back(j);

        // Update the last Jacobsthal number
        lastJacobsthalNumber = jacobsthalSequence[i];
    }
    return (indexes);
}

template<typename T>
void	PmergeMe<T>::displayResult(void) {

	std::cout << "After:	";
	if (this->_stack.size() < 5) {
		for (size_t i = 0; i < this->_stack.size(); i++)
			std::cout << _stack[i] << " ";
	}
	else {
		for (size_t i = 0; i < 4; i++)
			std::cout << _stack[i] << " ";
		if (this->_stack.size() == 5)
			std::cout << _stack[4];
		else
			std::cout << "[...]";
	}
	std::cout << std::endl;
}


template <typename T>
std::string getContainerName();

template <>
std::string getContainerName<std::vector<int> >() {
    return "vector<int>";
}

template <>
std::string getContainerName<std::deque<int> >() {
    return "deque<int>";
}

template<typename T>
void	PmergeMe<T>::time() const {
    std::cout << "Time to process a range of " << _stack.size();
	std::cout << " elements with std::" << getContainerName< T >();
	std::cout << " : " << std::fixed << std::setprecision(5) << _time << " us" << std::endl;
}

template class PmergeMe< std::vector<int> >;
template class PmergeMe< std::deque<int> >;
