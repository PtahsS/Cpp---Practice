#include <iostream>
#include <ctime>
using namespace std;

// Addition function

int Sum(int a, int b)
{
	return(a + b);
}

int main()
{
	cout << "Addition function";
	int a, b, c;
	cout << "Enter first number:   ";
	cin >> a;

	cout << "Enter second number:   ";
	cin >> b;

	c = Sum(a, b);
	cout << "Answer is " << c << '.'<< endl;

	return 0;
}