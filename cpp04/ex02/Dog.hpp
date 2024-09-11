/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:56:47 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 18:06:09 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
	private :
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator =(const Dog& src);
		void makeSound(void)const;
		Brain* getBrain(void)const;
};