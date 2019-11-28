#include <iostream>
using namespace std;

// passing parameters to a funtcion


void Foo(int* pa, int* pb, int* pc)
{
	(*pa)++;
	*pb += 2;
	(*pc) *=3;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	cout << "a: " << a << "  b:  " << b << "  c:  " << c << endl;
	Foo(&a, &b, &c);
	cout << "a: " << a << "  b:  " << b << "  c:  " << c << endl;

}