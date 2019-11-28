#include <iostream>
using namespace std;

// Change values of variables in function with links

void Change(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	cout << a << " : " << b << endl;
	Change(a, b);
	cout << a <<  " : "  << b << endl;


	return 0;
}