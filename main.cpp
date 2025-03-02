#include <stdlib.h>
#include <ctime>
#include <iostream>

#include "lib/include/Quick_Sort.h"

int main()
{
	// generate random test vector to sort
	srand(time(nullptr));
	size_t size{ rand() % 100 };
	std::vector<int> test_vec{};
	for (int it{size}; it <= size; it++)
		test_vec.push_back(rand() % 1000);

	return 0;
}

