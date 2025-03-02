#include "../include/Quick_Sort.h"

// partition function prototype
int partition(std::vector<int>& vec, int left, int right) {
	// pivot index and index to lastly swapped element
	int pivot{(left + right) / 2}, i{left - 1};
	// sort vec from left to right in ascending order
	for (int j{left}; j <= right; j++) {
		// current element is less than or equal to pivot
		if (vec[j] <= vec[pivot]) {
			// update lastly swapped element index and swap elements
			i++;
			std::swap(vec[i], vec[j]);
			// when pivot is reached, update its index
			if (j == pivot) pivot = i;
		}
	}
	// at the end, swap the pivot with the lastly swapped element
	std::swap(vec[i], vec[pivot]);
	pivot = i;

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

