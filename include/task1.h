#pragma once
#pragma warning(disable : 4996)
#include <cstring>
template<class T> void mergesort(T* a, int l, int r) {
	if (l == r) return;
	int mid = (l + r) / 2;
	mergesort(a, l, mid);
	mergesort(a, mid + 1, r);
	int i = l;
	int j = mid + 1;
	T* tmp = new T[r];
	for (int step = 0; step < r - l + 1; step++)
	{
		if ((j > r) || ((i <= mid) && (a[i] < a[j])))
		{
			tmp[step] = a[i];
			i++;
		}
		else
		{
			tmp[step] = a[j];
			j++;
		}
	}
	for (int step = 0; step < r - l + 1; step++)
		a[l + step] = tmp[step];
}

template<> void mergesort(char* a[6], int l, int r) {
	if (l == r) return;
	int mid = (l + r) / 2;
	mergesort(a, l, mid);
	mergesort(a, mid + 1, r);
	int i = l;
	int j = mid + 1;
	char** tmp = new char* [r];
	for (int i = 0; i < r; i++) {
		tmp[i] = new char[r];
		for(int j = 0; j < r; j++)
			tmp[i][j]=(char)'/0';
	}
	for (int step = 0; step < r - l + 1; step++)
	{
		if ((j > r) || ((i <= mid) && (strlen(a[i]) < strlen(a[j]))))
		{

			tmp[step] = a[i];
			i++;
		}
		else
		{
			tmp[step]= a[j];
			j++;
		}
	}
	for (int step = 0; step < r - l + 1; step++)
		a[l + step]= tmp[step];
}
template<class T> void msort(T* a, int r) {
	mergesort(a, 0, r - 1);
}
template<> void msort(char* a[6], int r) {
	mergesort(a, 0, r - 1);
}
