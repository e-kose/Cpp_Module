/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:45:04 by ekose             #+#    #+#             */
/*   Updated: 2025/01/22 23:50:12 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include "Array.tpp"
template <typename T>
void iter(T *array, int length, void (*func)(T&))
{
	for (int i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void print(T &elem)
{
	std::cout << elem << std::endl;
}
#endif