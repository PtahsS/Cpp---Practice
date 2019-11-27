#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int height, width;
	cout << "Enter height of rectangle:   " ;
	cin >> height;
	cout << "Enter width of rectangle:   ";
	cin >> width;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			(i == 0 || i == height-1 || j == 0 || j == width-1) ? cout << " * " : cout << "   ";
		}
		cout << endl;
	}
	return 0;
}
