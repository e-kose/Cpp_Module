/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:14:35 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 18:06:18 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"
# include <iostream>
# include "Brain.hpp"

class WrongCat : public WrongAnimal{
	private:
		Brain *brain;
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator =(const WrongCat& src);
		~WrongCat();
		void makeSound(void)const;
		Brain* getBrain(void)const;
};