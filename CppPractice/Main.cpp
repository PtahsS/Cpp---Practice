#include <iostream>
#include <ctime>
using namespace std;

// Smallest number of array

int main()
{
	srand(time(NULL));
	const int size  = 20;
	int arr[size]{};
	

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()% 100;
	}

	int sm = arr[0];

	for (int i = 0; i < size;i++)
	{
		if (sm > arr[i])
		{
			sm = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

	cout << "Smallest number of array is:   " << sm << endl;
	return 0;
}