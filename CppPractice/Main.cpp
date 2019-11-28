#include <iostream>
#include <ctime>
using namespace std;

// Function overload;

int Sum(int a, int b)
{
	return (a + b);
}
double Sum(double a, double b)
{
	return (a + b);
}



int main()
{
	int c;
	double d;
	c = Sum(5, 8);
	cout << c << endl;

	d = Sum(5.34, 8.12);
	cout << d << endl;

	return 0;
}