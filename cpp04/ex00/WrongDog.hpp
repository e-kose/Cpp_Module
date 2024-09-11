/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:16:40 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:17:04 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"
# include <iostream>
class WrongDog : public WrongAnimal{
	public:
		WrongDog();
		WrongDog(const WrongDog& copy);
		WrongDog& operator =(const WrongDog& src);
		~WrongDog();
		void makeSound(void)const;
};