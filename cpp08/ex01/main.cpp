/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:30:33 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 12:47:23 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    try {
        unsigned int testSize = 10000;
        Span sp(testSize);

        std::vector<int> largeData;
		srand(time(NULL));
        for (unsigned int i = 0; i < testSize; ++i) {
            largeData.push_back(rand() % 100000);
        }

        sp.addBulk(largeData.begin(), largeData.end());

        std::cout << "Span successfully added " << testSize << " numbers!" << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		Span sp2(5);
		sp2.addNumber(5);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
		sp2.addNumber(11);
		std::cout << "Span2: " << std::endl;
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		// sp2.addNumber(1);

		Span sp4(sp2);

		sp4.printNum();
		}
		catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		}
		
		try {
			Span sp3(1);
			sp3.addNumber(1);
			sp3.longestSpan();
    	}
		catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
		
    }
    return 0;
}
