/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:49:38 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 12:39:27 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <deque>
#include <vector>
#include <limits>
#include <iostream>
#include <exception>
#include <algorithm>
class Span{
	private:
		unsigned int n;
		std::deque<int> dque;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& copy);
		~Span();
		Span& operator=(const Span& src);
		void addNumber(int num);
		void printNum()const;
		const unsigned int& getN()const;
		const std::deque<int>& getDeque()const;
		size_t shortestSpan();
		size_t longestSpan();
		template <typename T>
		void addBulk(T iterBeg, T iterEnd) {
		    if (std::distance(iterBeg, iterEnd) > static_cast<long>(this->n - this->dque.size()))
		        throw Span::SizeOverFlow();
		    this->dque.insert(this->dque.end(), iterBeg, iterEnd);
		}
		class SizeOverFlow: public std::exception{
			public:
				virtual const char* what()const throw();
		};
		class InsufficientSize: public std::exception{
			public:
				virtual const char* what()const throw();
		};
};
#endif