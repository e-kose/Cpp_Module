/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:35:10 by ekose             #+#    #+#             */
/*   Updated: 2025/01/27 18:25:02 by ekose            ###   ########.fr       */
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
		// class iterator{
		// 	public:
				
		// }
};
#include "MutantStack.tpp"
#endif