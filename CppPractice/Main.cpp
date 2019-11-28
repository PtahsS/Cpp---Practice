#include <iostream>
using namespace std;

// Template function

template <typename T1, typename T2>

T1 Sum(T1 a, T2 b)
{
	return (a + b);
}




int main()
{
	int c;
	double d;
	c = Sum(5, 8);
	cout << c << endl;

	d = Sum(5, 8.67);
	cout << d << endl;

	return 0;
}