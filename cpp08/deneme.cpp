#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>

int main(){

	std::list<int> lst;
	lst.push_front(1) , lst.push_front(23) , lst.push_front(13);
	std::vector<int> vec;
	vec.push_back(13) , vec.push_back(3),vec.push_back(3);
	std::deque<int> quee;

	std::cout << lst.size() << "\n";
	
	std::cout<< vec.capacity() << "\n";
	
	std::cout << quee.size() << std::endl;
}