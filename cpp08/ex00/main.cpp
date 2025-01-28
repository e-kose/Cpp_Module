/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:06:43 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 13:10:20 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>
#include <algorithm>
#include <queue>
int main(){
	
	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_front(0);
	lst.push_back(2);
	lst.push_back(100);
	lst.push_front(23);

	int arr[] = {1, 3, 24, 12};
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
	vec.push_back(133);
	std::queue<int> qu;
	qu.push(0) , qu.push(311),qu.push(42),qu.push(13),qu.push(1);
	try
	{
		std::list<int>::iterator lIt;
		lIt = easyfind(lst,10);
		std::cout<< "Found value: "<< *lIt << "\n";
		
		lIt = easyfind(lst, 23);
		std::cout<< "Found value: "<< *lIt << "\n";
		
		std::vector<int>::iterator vIt;
		vIt = easyfind(vec,1);
		std::cout<< "Found value: "<< *vIt << "\n";	

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}