#include <iostream>
using namespace std;

// Recursion

int Foo(int a)
{
	if (a < 1)
	{
		return 0;
	}
	cout << a<< "  ";
	Foo(a - 1);
}

int main()
{
	int a = 10;
	Foo(a);
	return 0;
}