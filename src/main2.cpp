#include <iostream>
#include "task2.h"

template<class T>
T gen(){
	static int c = 48;
	return c++;
}

int mai1n()
{
	int* mas = createArr<int, 10>(gen);
	for (int i = 0; i < 10; i++)
		std::cout << mas[i] << " ";
	return 0;
}