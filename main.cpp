#include <stdlib.h>
#include <ctime>
#include <iostream>

#include "lib/include/Quick_Sort.h"

int main()
{
	// generate random test vector to sort
	srand(time(nullptr));
	size_t size{ (size_t)rand() % 30 };
	std::vector<int> test_vec{};
	for (size_t it{0}; it < size; it++)
		test_vec.push_back(rand() % 1000);
	
	// print unsorted vector
	std::cout << "Unsorted vector: ";
	for (auto& it : test_vec)
		std::cout << it << " ";
	std::cout << std::endl;

	// sort vector
	quick_sort(test_vec, 0, test_vec.size() - 1);

	// print sorted vector
	std::cout << "Sorted vector: ";
	for (auto& it : test_vec)
		std::cout << it << " ";
	std::cout << std::endl;

	return 0;
}

