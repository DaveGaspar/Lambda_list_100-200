#include <iostream>
#include <list>
#include <algorithm>

void print(std::list<int> l){
	for (auto in : l){
		std::cout << in << " ";
	}
}

int main(){
	std::list<int> m_list;
	for (int i = 0; i < 10; i++){
		m_list.push_back(rand()%190 + 10);
	}
	std::cout << "List: " << std::endl;
	print(m_list);
	std::cout << std::endl << std::endl;

	std::cout << "Elments between 100 and 200: " << std::endl;
	std::for_each(m_list.begin(), m_list.end(),[](auto it){
		if (it > 100 && it < 200){
			std::cout << it << " ";
		}
	});
	std::cout << std::endl << std::endl;

	return 0;
}