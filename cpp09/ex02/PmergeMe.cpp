/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:02:03 by ekose             #+#    #+#             */
/*   Updated: 2025/02/01 16:02:29 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &copy){
	*this = copy;
}

PmergeMe::~PmergeMe(){}

PmergeMe& PmergeMe::operator=(const PmergeMe& src){
	if (this == &src)
		return *this;
	vecData = src.vecData;
	deqData = src.deqData;
	return *this;
}

void PmergeMe::PmergeMeRun(char **argv){
	clock_t start, end;
	this->parseData(argv);
	start = clock();
	for(int i = 1; argv[i] ; i++){
		this->vecData.push_back(atoi(argv[i]));
	}
	this->execute("vector");
	end = clock();
	double timeVec = double(end - start) / CLOCKS_PER_SEC;
	
	start = clock();
	for (int i = 1; argv[i] ; i++)
		this->deqData.push_back(atoi(argv[i]));
	this->execute("deque");
	end = clock();
	double timeDeq = double(end - start) / CLOCKS_PER_SEC;

	std::cout << std::fixed << std::setprecision(6);
    std::cout << "Time to process a range of " << this->deqData.size() << " elements with std::deque  : " << timeDeq << " sec" << std::endl;
    std::cout << "Time to process a range of " << this->vecData.size() << " elements with std::vector : " << timeVec << " sec" << std::endl;
}

void PmergeMe::parseData(char **argv){
	for (int i = 1; argv[i] != NULL; i++){
		for (int j = 0; argv[i][j] != '\0' ; j++){
			if(!isdigit(argv[i][j]) || (strlen(argv[i]) == 1 && argv[i][j] == '0')){
				throw PmergeMe::ArgError();
			}
		}
	}
}
void PmergeMe::execute(std::string type){

    std::cout << "Before: ";
	
	if(type == "vector"){
		printData(this->vecData);
    	mergeInsertionSort(this->vecData, 0, this->vecData.size() - 1);
		
		std::cout << "After: ";
		printData(this->vecData);
	}
	else if(type == "deque"){
		printData(this->deqData);
		mergeInsertionSort(this->deqData, 0, this->deqData.size() - 1);
		
		std::cout << "After: ";
		printData(this->deqData);
	}	
}
const char* PmergeMe::ArgError::what()const throw(){
	return "Error";
}