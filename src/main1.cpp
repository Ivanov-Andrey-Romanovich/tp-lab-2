#include "task1.h"
#include "time.h"

int main() {
	srand(time(NULL));
	const int n = 7;
	int mas[n];
	for (int i = 0; i < n; i++)
		mas[i] = rand() % 100 + 1;
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	msort(mas, n);
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << "\n";
	char* arr[n] = { (char*)"qwe", (char*)"qw", (char*)"q", (char*)"qwer", (char*)"qwere", (char*)"qwerewq", (char*)"qwerew" };
	msort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
	return 0;
}