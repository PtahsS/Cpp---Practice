#include <iostream>
#include <ctime>
using namespace std;

// Dynamic array. Creating, filling, printing

int main()
{
	srand(time(NULL));

	cout << "Enter size of dynamic array:   ";
	int size;
	cin >> size;
	cout << endl;

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr + i << ':' << arr[i] << '\t';
	}
	cout << endl;
	delete[] arr;
	return 0;
}