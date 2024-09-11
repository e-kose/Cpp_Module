/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:56:47 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:04:45 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal{
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator =(const Dog& src);
		void makeSound(void)const;
};