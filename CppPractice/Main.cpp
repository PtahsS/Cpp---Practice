#include <iostream>
#include <ctime>
using namespace std;

// FillArray & PrintArray

void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}


int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size]{};
	FillArray(arr, size);
	PrintArray(arr, size);


	return 0;
}