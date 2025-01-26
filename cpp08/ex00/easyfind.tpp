/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:05:39 by ekose             #+#    #+#             */
/*   Updated: 2025/01/26 18:22:13 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
template <typename T>
typename T::iterator easyfind(T& cont, int x){
	typename T::iterator it =  std::find(cont.begin(), cont.end(), x);
	
	if (it == cont.end())
		throw std::runtime_error("Value not found in container.");

	return it;
}