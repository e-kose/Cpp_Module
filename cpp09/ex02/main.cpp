/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:39:24 by ekose             #+#    #+#             */
/*   Updated: 2025/02/01 16:01:23 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2)
	{
		std::cerr << "Invalid arguments" << std::endl;
		return 1;
	}
	try{
		PmergeMe pmm;
		pmm.PmergeMeRun(argv);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}