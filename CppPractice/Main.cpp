#include <iostream>
using namespace std;

// Functions, link, pointer
void Foo1(int a)
{
	a = 2;
}

void Foo2(int* a)			//Pointer
{
	a = 100;		
}

void Foo3(int& a)			//Link
{
	a = 200;
}

int main()
{
	int a = 10;
	cout << "a is " << a << endl;
	Foo1(a);
	cout << "After Foo1(a)  " << a << endl;
	Foo2(&a);
	cout << "After Foo2(a)  " << a << endl;
	Foo3(a);
	cout << "After Foo3(a)  " << a << endl;
	return 0;
}