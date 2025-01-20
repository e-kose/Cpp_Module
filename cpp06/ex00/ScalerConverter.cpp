/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:37:22 by ekose             #+#    #+#             */
/*   Updated: 2025/01/20 18:01:05 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalerConverter.hpp"

ScalerConverter::ScalerConverter() {}

ScalerConverter::ScalerConverter(ScalerConverter const & copy) {
    *this = copy;
}

ScalerConverter & ScalerConverter::operator=(ScalerConverter const & src) {
    (void)src;
    return *this;
}

ScalerConverter::~ScalerConverter() {}

void ScalerConverter::convert(const std::string &literal){

    char c;
    int i;
    float f;
    double d;

    try{
        if (literal.length() == 1 && !isdigit(literal[0])){
            c = static_cast<char>(literal[0]);
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
        }
        else{
            i = std::stoi(literal);
            f = std::stof(literal);
            d = std::stod(literal);
            c = static_cast<char>(i);
        }
    }
    catch(const std::exception& e){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if(literal == "nan" || literal == "nanf" || literal == "inf" || literal == "inff")
            std::cout << "float: "<< std::stof(literal) << "f" << std::endl;
        else
            std::cout << "float: impossible" << std::endl;
       if (literal == "nan" || literal == "nanf" || literal == "inf" || literal == "inff")
            std::cout << "double: "<< std::stod(literal) << std::endl;
        else
            std::cout << "double: impossible" << std::endl;
        return;
    }
    if (i >= 0 && i <= 127){
        if (isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
    if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (f > std::numeric_limits<float>::max() || f < std::numeric_limits<int>::min())
        std::cout << "float: impossible" << std::endl;
    else{
        std::cout << "float: " << f;
        if (f - i == 0)
            std::cout << ".0f";
        else
            std::cout << "f";
        std::cout << std::endl;
    }
    if (d > std::numeric_limits<double>::max() || d < std::numeric_limits<int>::min())
        std::cout << "double: impossible" << std::endl;
    else
    {
        std::cout << "double: " << d;
        if (d - static_cast<int>(d) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
}