#include <iostream>
using namespace std;

// Change values of variables in function 

void Foo(int& a, int& b, int& c)
{
	a = 2;
	b = 3;
	c = 4;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	Foo(a, b, c);
	cout << a << "  " << b << "  " << c << endl;
	return 0;
}