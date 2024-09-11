/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:10:59 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:50:25 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
		std::string Name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void announce( void );
		void ft_set_name(std::string name);
};
Zombie* zombiHorde(int N, std::string name);
#endif
