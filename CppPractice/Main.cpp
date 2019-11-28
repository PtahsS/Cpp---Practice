#include<iostream>
using namespace std;

// ASCII symbols

void main()
{
	for (int i = 0; i < 255; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl << endl;
		}
		cout << i << ":" << (char)i <<"     ";
		

		
	}
}
