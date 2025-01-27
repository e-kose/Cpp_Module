#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <stack>
int main(){

	std::list<int> lst;
	lst.push_front(1) , lst.push_front(23) , lst.push_front(13);
	std::vector<int> vec;
	vec.push_back(13) , vec.push_back(3),vec.push_back(3), vec.push_back(132);
	std::deque<int> quee;

	// std::cout << vec.empty() << "\n";
	
	// std::cout << lst.size() << "\n";
	
	// std::cout<< vec.capacity() << "\n";
	
	// std::cout << quee.size() << std::endl;
	// std::sort(vec.begin(), vec.end());
	std::vector<int>::iterator it = vec.begin();
	for ( ;it < vec.end(); it++){
		std::cout << *it << "\n";
	}
	vec.erase(vec.begin(), vec.begin()+ 1);
	it = vec.begin();
	std::cout <<"\n";
	for ( ;it < vec.end(); it++){
		std::cout << *it << "\n";
	}
	// std::vector<int> v(vec.begin(),vec.end());
	// std::vector<int>::iterator it1 = v.begin();
	// for ( ;it1 < v.end(); it1++){
	// 	std::cout << *it1 << "\n";
	// }
	// std::stack<
}