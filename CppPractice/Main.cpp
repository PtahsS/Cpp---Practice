#include <iostream>
using namespace std;

// Array pointer. Create array, make pointer, show array by pointer.

int main()
{
	const int size = 7;
	int arr[size]{};
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
	int* pointerArr = arr;
	cout << arr << endl;
	cout << pointerArr << endl;
	for (int i = 0; i < size; i++)
	{
		cout << pointerArr[i] << "  ";
	}

	return 0;
}