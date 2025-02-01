/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:48:09 by ekose             #+#    #+#             */
/*   Updated: 2025/02/01 15:58:22 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <exception>
#include <iomanip>  

#define THRESHOLD 10
class PmergeMe{
	private:

		std::vector<int> vecData;
		std::deque<int> deqData;
		template <typename T>
		void insertionSort(T& cont, int endIndex){
			for(int i = 1; i <= endIndex; i++){
				int key = cont[i];
				int j = i - 1;
				while(j >= 0 && cont[j] > key){
					cont[j + 1] = cont[j];
					j--;
				}
				cont[j + 1] = key;
			}
		}
		
		template <typename T>
		void merge(T& cont, int left, int mid, int right){
			T leftArr(cont.begin() + left, cont.begin() + mid + 1);
    		T rightArr(cont.begin() + mid + 1, cont.begin() + right + 1);
		
    		int i = 0, j = 0, k = left;
    		while (i < static_cast<int>(leftArr.size()) && j < static_cast<int>(rightArr.size())) {
    		    cont[k++] = (leftArr[i] <= rightArr[j]) ? leftArr[i++] : rightArr[j++];
    		}
    		while (i < static_cast<int>(leftArr.size()))
				cont[k++] = leftArr[i++];
    		while (j < static_cast<int>(rightArr.size()))
				 cont[k++] = rightArr[j++];
		}
		
		template <typename T>
		void mergeInsertionSort(T& cont, int left, int right){
			if (right - left + 1 <= THRESHOLD)
			{
				insertionSort(cont, right);
				return ;	
			}
			int mid = left + (right - left) / 2;
   			mergeInsertionSort(cont, left, mid);
    		mergeInsertionSort(cont, mid + 1, right);
			merge(cont, left, mid, right);
		}
		template <typename T>
		void printData(T& cont)const{
			for (size_t i = 0; i < cont.size(); i++){
				std::cout << cont[i]<< " ";
				if (i >= 10) {
          			std::cout << "[ ... ]";
         			break;
    		    }
			}
			std::cout << std::endl;
		}
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& src);
		void execute(std::string type);
		void parseData(char **argv);
		void PmergeMeRun(char **argv);
		class ArgError: public std::exception{
			virtual const char* what() const throw();
		};
};
#endif