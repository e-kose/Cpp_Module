/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:44:09 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:03:54 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();
		~Cat();
		Cat(const Cat& copy);
		Cat& operator =(const Cat& src);
		void makeSound(void)const;
};