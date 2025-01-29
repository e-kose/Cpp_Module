/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:52:14 by ekose             #+#    #+#             */
/*   Updated: 2025/01/29 16:23:50 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string fileName):fileName(fileName){
	try{
		this->parse("|");
		this->parse(",");
	}
	catch(int e){
		e == 2 ? std::cout << this->fileName << " not found" << std::endl : std::cout << "data.csv not found" << std::endl;
		throw 1;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
	if (this == &src) {
	   return (*this);
	}
	this->fileName = src.getFileName();
	this->data = src.data;
	this->input = src.input;
	return *this;
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::parse(const std::string& sep) {
    std::deque<std::pair<std::string, std::string> > map;
    std::string line;
    size_t pos = 0;
    std::ifstream input(sep == "," ? "data.csv" : this->fileName.c_str());
    if (input.is_open()) {
        std::getline(input, line);
        while (std::getline(input, line)) {
            pos = line.find(sep);
            if (!line.empty() && pos != std::string::npos)
                map.push_back(std::make_pair(line.substr(0, pos), line.substr(pos + 1)));
            else
                map.push_back(std::make_pair(line, ""));
        }
        input.close();
    } else {
        sep == "," ? throw 1 : throw 2;
    }
    sep == "," ? this->data = map : this->input = map;
}

void BitcoinExchange::printData() const {
    if (this->data.empty() || this->input.empty()) {
        std::cout << "Data or Input is empty" << std::endl;
        return;
    }

    std::deque<std::pair<std::string, std::string> >::const_iterator iterInput = this->input.begin();

    for (; iterInput != this->input.end(); ++iterInput) {
        if (this->dateFormatCheck(iterInput->first) && this->dateCheck(iterInput->first)) {
            std::string inDate = iterInput->first;
            std::string inVal = iterInput->second;

            if (inVal.empty() || atof(inVal.c_str()) < 0) {
                std::cout << "Error: not a positive number." << std::endl;
            } else if (atof(inVal.c_str()) > 1000) {
                std::cout << "Error: too large a number." << std::endl;
            } else {
                float result = atof((returnValue(iterInput)->second).c_str()) * atof(inVal.c_str());
                std::cout << iterInput->first << " => " << iterInput->second << " = " << result << std::endl;
            }
        } else {
            std::cout << "Error: bad input => " << iterInput->first << std::endl;
        }
    }
}

std::string BitcoinExchange::trim(const std::string str)const {
    size_t start = str.find_first_not_of(" \t\n\r"); 
    if (start == std::string::npos) {
        return ""; 
    }
    size_t end = str.find_last_not_of(" \t\n\r");
    return str.substr(start, end - start + 1);
}

bool BitcoinExchange::dateFormatCheck(const std::string& date) const {
	std::string temp  = this->trim(date);
    if (temp.length() != 10)
        return false;

    if (temp[4] != '-' || temp[7] != '-')
        return false;

    for (size_t i = 0; i < temp.length(); ++i) {
        if ((i != 4 && i != 7) && !std::isdigit(date[i]))
            return false;
    }
    return true;
}

bool BitcoinExchange::dateCheck(const std::string& date) const {
	if (date == "")
		return false;
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 2009 || year > 2030)
		return false;
	if(year == 2009 && month == 1 && day < 2)
		return false;
	if (month < 1 || month > 12)
        return false;
	if (day < 1 || day > 31)
		return false;
	return true;
}

std::deque<std::pair<std::string, std::string> >::const_iterator BitcoinExchange::returnValue(const std::deque<std::pair<std::string, std::string> >::const_iterator& inputIter)const{

    std::deque<std::pair<std::string, std::string> >::const_iterator iterData = this->data.begin();
    std::deque<std::pair<std::string, std::string> >::const_iterator nextIter = iterData;
    for(; iterData != this->data.end() ; iterData++){
        if ((inputIter->first >= iterData->first && inputIter->first < nextIter->first) || nextIter == this->data.end())
            return iterData; 
    }
    return inputIter;
}

const std::string& BitcoinExchange::getFileName() const {
    return this->fileName;
}