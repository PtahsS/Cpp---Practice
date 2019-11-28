#include <iostream>
using namespace std;

// variables a,b exchange


void Foo(int* pa, int* pb)
{
	int temp = (*pa);
	(*pa) = (*pb);
	(*pb) = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout << "a: " << a << "  b:  " << b << endl;

	Foo(&a, &b);

	cout << "a: " << a << "  b:  " << b << endl;

}