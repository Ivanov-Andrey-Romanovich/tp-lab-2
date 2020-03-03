#include <iostream>
#include "task2.h"

int main1() {
	const size_t n = 5;
	//int* arr;
	//arr = createArr<int, n>(gen);
	char* arr;
	arr = createArr<char, n>(gen);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}
