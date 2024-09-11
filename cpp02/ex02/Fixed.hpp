/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:58:28 by ekose             #+#    #+#             */
/*   Updated: 2024/09/04 18:58:47 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
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
		bool operator <(const Fixed& other)const;
		bool operator >(const Fixed& other)const;
		bool operator >=(const Fixed& other)const;
		bool operator <=(const Fixed& other)const;
		bool operator ==(const Fixed& other)const;
		bool operator !=(const Fixed& other)const;
		Fixed operator +(const Fixed& other)const;
		Fixed operator -(const Fixed& other)const;
		Fixed operator *(const Fixed& other)const;
		Fixed operator /(const Fixed& other)const;
		Fixed& operator ++(void);
		Fixed operator ++(int);
		Fixed& operator --(void);
		Fixed operator --(int);
		static const Fixed& min(const Fixed& first, const Fixed& second);
		static Fixed& min(Fixed& first, Fixed& second);
		static const Fixed& max(const Fixed& first, const Fixed& second);
		static Fixed& max(Fixed& first, Fixed& second);
};

std::ostream& operator <<(std::ostream &output, const Fixed& fixed);
#endif