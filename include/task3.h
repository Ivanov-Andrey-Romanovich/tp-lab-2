#pragma once
#include <cstring>
template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template <typename T, int n> void map(T* arr, T(*change)(T val)) {
	for (int i = 0; i < n; i++) {
		arr[i] = change(arr[i]);
	}
}
