/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:39:22 by ekose             #+#    #+#             */
/*   Updated: 2025/01/20 18:01:52 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALERCONVERTER_HPP
# define SCALERCONVERTER_HPP

#include <iostream>
#include <limits>
#include <string>

class ScalerConverter{
    private:
        ScalerConverter();
        ScalerConverter(ScalerConverter const & copy);
        ScalerConverter & operator=(ScalerConverter const & src);
        ~ScalerConverter();
    public:
        static void convert(const std::string &literal);
};
#endif