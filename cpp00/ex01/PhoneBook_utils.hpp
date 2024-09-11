/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:50:38 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:08:17 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKUTILS_HPP
# define PHONEBOOKUTILS_HPP

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <string> 

std::string 	ft_trim(std::string &str);
std::string 	ft_truncate_and_addDot(const std::string& str);
bool 			ft_check_number(std::string &str);
void			ft_error(void);
void 			ft_print_header(void);
void 		 	ft_print_person(int index,std::string name, std::string surname, std::string nickname);
#endif