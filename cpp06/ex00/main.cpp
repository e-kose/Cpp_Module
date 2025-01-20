/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:10:39 by ekose             #+#    #+#             */
/*   Updated: 2025/01/20 14:12:00 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalerConverter.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    ScalerConverter::convert(argv[1]);
    return 0;
}