#include <iostream>
#include <ctime>
using namespace std;

// Two-dimensional array

int main()
{
	srand(time(NULL));
	const int row = 5;
	const int col = 10;
	int arr[row][col]{};
	

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 100;

		}
	}

	

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j];

		}
		cout << endl;
	}

	return 0;
}