#include <iostream>
using namespace std;

// Work with dynamic memory. Variable


int main()
{
	int* pa = new int;
	*pa = 10;
	cout << pa << "   " << *pa << endl;
	delete pa;

	return 0;
}