/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:27:58 by ekose             #+#    #+#             */
/*   Updated: 2025/01/29 16:36:24 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <queue>
#include <limits>
#include <cstdlib>
#include <iterator>

class BitcoinExchange{
	private:
	    std::string fileName;
	    std::deque<std::pair<std::string, std::string> > data;
	    std::deque<std::pair<std::string, std::string> > input;
	    bool dateFormatCheck(const std::string& date) const;
	    bool dateCheck(const std::string& date) const;
	    std::deque<std::pair<std::string, std::string> >::const_iterator returnValue(const std::deque<std::pair<std::string, std::string> >::const_iterator& inputIter) const;
	    void parse(const std::string& sep);
	    std::string trim(const std::string str) const;
	public:
	    BitcoinExchange();
	    BitcoinExchange(std::string fileName);
	    BitcoinExchange(const BitcoinExchange &copy);
	    ~BitcoinExchange();
	    BitcoinExchange& operator=(const BitcoinExchange& src);
	    const std::string& getFileName() const;
	    void printData() const;
};
#endif