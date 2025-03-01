#include "../include/Quick_Sort.h"

// partition function prototype
int partition(std::vector<int>& vec, int left, int right) {
	int pivot{(left + right) / 2}, i{left - 1};
	// sort vec
	for (int j{left}; j <= right; j++) {
	}
	
	return pivot;
}

// quick sort function implementation
void quick_sort(std::vector<int>& vec, int left, int right){
	int pivot{ -1 };

	if (left < right) {
		pivot = partition(vec, left, right);

		quick_sort(vec, left, pivot - 1);
		quick_sort(vec, pivot + 1, right);
	}
}

