#include <iostream>
using namespace std;

// Factorial

int Factorial(int a)
{
	if (a < 1)
	{
		return 1;
	}
	return a*Factorial(a - 1);
}

int main()
{
	int a = 5;
	cout << Factorial(a);
	return 0;
}