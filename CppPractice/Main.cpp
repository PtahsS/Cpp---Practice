#include <iostream>
#include <ctime>
using namespace std;

// Dynamic arrays. Crete, print.

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 40;
	}
}
void PrintArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));
	int size;
	cout << "Enter size of array:  ";
	cin >> size;

	int* arr = new int[size];
	FillArray(arr, size);
	PrintArray(arr, size);
	delete[] arr;

	int* arr2 = new int[size];
	FillArray(arr2, size);
	PrintArray(arr2, size);
	delete[] arr2;

	return 0;
}