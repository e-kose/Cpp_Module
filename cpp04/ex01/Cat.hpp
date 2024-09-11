/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:44:09 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 17:57:29 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& copy);
		Cat& operator =(const Cat& src);
		void makeSound(void)const;
		Brain* getBrain(void)const;
};