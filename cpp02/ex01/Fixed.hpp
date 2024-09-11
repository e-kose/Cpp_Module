/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:30:47 by ekose             #+#    #+#             */
/*   Updated: 2024/09/03 19:16:09 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed{
	private:
		int fixed;
		static const int nbOfFract;
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &copy);
		Fixed& operator =(const Fixed &src);
		~Fixed(void);
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;
};

std::ostream &operator <<(std::ostream &out, const Fixed &fixed);
#endif