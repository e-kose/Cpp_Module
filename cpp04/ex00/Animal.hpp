/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:20:16 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:11:26 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator =(const Animal& src);
		virtual ~Animal();
		virtual void makeSound(void)const;
		void setType(std::string type);
		std::string getType(void)const;
};