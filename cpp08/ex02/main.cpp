/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:55:05 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 13:09:41 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main() {
    MutantStack<int> mstack;
	std::cout << "Stack is empyt : "<< mstack.empyt()<<"\n";
    mstack.push(5);
	std::cout << "Stack is empyt : "<< mstack.empyt()<<"\n";
    mstack.push(17);
    std::cout << "Top: " << mstack.top() << std::endl;

    std::cout << "Size before pop: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
	std::cout << "Top after pop: " << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(12);
    mstack.push(737);

    std::cout << "Elements in MutantStack:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}