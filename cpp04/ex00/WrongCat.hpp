/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:14:35 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 16:15:02 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator =(const WrongCat& src);
		~WrongCat();
		void makeSound(void)const;
};