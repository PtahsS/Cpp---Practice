#include <iostream>
#include <ctime>
using namespace std;

// Change size of an array. Push, pop.

void FillArr(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()% 50;
	}
}

void PrintArr(const int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void PushBack(int*& arr, int& size,int const value)
{
	int* tempArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		tempArr[i] = arr[i];
	}
	tempArr[size] = value;
	size++;
	delete[]arr;
	arr = tempArr;
	
}
void PopBack(int*& arr, int& size)
{
	int* tempArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		tempArr[i] = arr[i];
	}
	size--;
	delete[] arr;
		arr = tempArr;
}

int main()
{
	srand(time(NULL));
	int size = 10;
	int* arr = new int[size];
	FillArr(arr, size);
	PrintArr(arr, size);
	PushBack(arr, size, 101);
	PrintArr(arr, size);
	PopBack(arr, size);
	PrintArr(arr, size);
	PopBack(arr, size);
	PrintArr(arr, size);
	PopBack(arr, size);
	PrintArr(arr, size);



	return 0;
}