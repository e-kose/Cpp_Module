/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:30:50 by ekose             #+#    #+#             */
/*   Updated: 2025/01/22 16:35:05 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void){
    Base *base = new Base();
    Base *generated = base->generate();
    base->identify(generated);
    base->identify(*generated);
    delete base;
    delete generated;

    return 0;
}