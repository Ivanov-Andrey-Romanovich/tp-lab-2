#include <iostream>
#include "task3.h"

template<class T>
T change(T val){
	return val + 1;
}
int main()
{
	int mas[]{ 1,2,3,4,5,6,7,8,9,10 };
	map<int, 10>(mas, change);
	for (int i = 0; i < 10; i++)
		std::cout << mas[i] << " ";
	return 0;
}