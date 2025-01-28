/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:35:10 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 12:50:07 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <vector>
#include <iostream>
template <typename T>
class MutantStack{
	private:
		std::vector<T> stck;
	public:
		MutantStack<T>();
		MutantStack<T>(const MutantStack& copy);
		MutantStack<T>& operator=(const MutantStack<T>& other);
		~MutantStack<T>();
		void pop();
		bool empyt()const;
		size_t size()const;
		T top()const;
		void push(const T& val);
		typedef typename std::vector<T>::iterator iterator;
		iterator begin();
		iterator end();
		typedef typename std::vector<T>::const_iterator const_iterator;
		const_iterator begin()const;
		const_iterator end()const;
};
#include "MutantStack.tpp"
#endif