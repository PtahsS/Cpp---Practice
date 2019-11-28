#include <iostream>
#define PI 3.14
#define Foo(x, y) (x+y*PI);
using namespace std;

// Define. Macro function

int main()
{
	double z = Foo(4.8, 6.7);
	cout << z;
	return 0;
}