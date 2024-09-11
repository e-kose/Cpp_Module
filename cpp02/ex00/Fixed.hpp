/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:28:18 by ekose             #+#    #+#             */
/*   Updated: 2024/09/03 15:11:50 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed{
	private:
		int fixed;
		static const int nbOfFract;
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed& operator =(const Fixed& src);
		~Fixed(void);
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

#endif
