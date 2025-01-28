/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:27:56 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 12:36:01 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span& copy) : n(copy.n), dque(copy.dque) {}

Span::~Span() {}

Span& Span::operator=(const Span& src) {
	if (this == &src)
		return *this;
	this->n = src.n;
	for(std::deque<int>::const_iterator it = src.dque.begin(); it != src.dque.end(); it++)
		this->dque.push_back(*it);
	return *this;
}

void Span::addNumber(int num) {
	if (this->dque.size() >= this->n)
		throw Span::SizeOverFlow();
	this->dque.push_back(num);
}

void Span::printNum()const {
	for(std::deque<int>::const_iterator it = this->dque.begin(); it != this->dque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

const unsigned int& Span::getN()const {
	return this->n;
}

const std::deque<int>& Span::getDeque()const {
	return this->dque;
}

size_t Span::shortestSpan() {
	if (this->dque.size() <= 1)
		throw Span::InsufficientSize();
	size_t min = std::numeric_limits<size_t>::max();
	std::vector<int> vec(this->dque.begin(), this->dque.end());
	std::sort(vec.begin(), vec.end());
	for(size_t i = 0; i < vec.size() - 1; i++) {
		min = std::min(min, static_cast<size_t>(vec[i + 1] - vec[i]));
	}
	return static_cast<size_t>(min);
}

size_t Span::longestSpan() {
	if (this->dque.size() <= 1)
		throw Span::InsufficientSize();
	int maxVal = *(std::max_element(this->dque.begin(), this->dque.end()));
	return static_cast<size_t>(maxVal - *(std::min_element(this->dque.begin(), this->dque.end())));
}

const char* Span::SizeOverFlow::what()const throw() {
	return "Size overflow!";
}

const char* Span::InsufficientSize::what()const throw() {
	return "Not enough numbers!";
}

