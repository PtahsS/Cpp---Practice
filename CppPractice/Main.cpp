#include <iostream>
using namespace std;

//Array of unique numbers

int main()
{
	const int size = 10;
	int arr[size]{};
	bool doubled;
	int randNumber;
	for (int i = 0; i < size;)
	{
		doubled = false;
		randNumber = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == randNumber)
			{
				doubled = true;
				break;
			}
		}
		if (!doubled)
		{
			arr[i] = randNumber;
				i++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
}