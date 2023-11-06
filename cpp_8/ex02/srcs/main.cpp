/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:26:58 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/06 09:53:27 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

int	main(void) {

    MutantStack<int> mstack;


    std::cout << "  ~TEST~  " << std::endl;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::cout << "  ~TEST 2~    " << std::endl;
    MutantStack<std::string>    test;

    test.push("Ceci");
    test.push("est");
    test.push("un");
    test.push("test.");

    MutantStack<std::string>::iterator it2 = test.begin();
    MutantStack<std::string>::iterator ite2 = test.end();

    while (it2 != ite2)
    {
        std::cout << *it2++ << " ";
    }
    std::cout << std::endl;
    std::cout << *test.begin() << " " <<*--test.end() << std::endl;
   
    std::list<std::string>    test2;

    test2.push_back("Ceci");
    test2.push_back("est");
    test2.push_back("un");
    test2.push_back("test.");

    std::list<std::string>::iterator it3 = test2.begin();
    std::list<std::string>::iterator ite3 = test2.end();

    while (it3 != ite3)
    {
        std::cout << *it3++ << " ";
    }
    std::cout << std::endl;
    std::cout << *test2.begin() << " " << *--test2.end() << std::endl;

    return (0);
}