#pragma once
#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
bool compare(T a, T b) {
	return a < b;
}

bool compare(char* a, char* b) {
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* array, int size) {
	if (size == 1) {
		return;
	}
	int mid = size / 2;
	msort(array, mid);
	msort((array + mid), size - mid);
	int l = 0;
	int r = mid;
	T* tarr = new T[size];
	for (int step = 0; step < size; step++) {
		if ((r >= size) || ((l < mid) && (compare(array[l], array[r])))) {
			tarr[step] = array[l];
			l++;
		}
		else {
			tarr[step] = array[r];
			r++;
		}
	}
	for (int step = 0; step < size; step++) {
		array[step] = tarr[step];
	}
	delete[] tarr;
}