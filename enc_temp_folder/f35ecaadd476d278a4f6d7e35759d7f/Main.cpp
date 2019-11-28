#include <iostream>
#include <ctime>
using namespace std;

// Dynamic array. Creating, filling, printing

int main()
{
	srand(time(NULL));
	int rows, cols;
	cout << "Enter count of rows:   ";
	cin >> rows;

	cout << "Enter count of cols:   ";
	cin >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 30;
		}
	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j]<< '\t';
		}
		cout << endl;
	}


	return 0;
}