#include<iostream>
#include<string>
using namespace std;

// Function pointer as parameter


void Foo2(int a)
{
	cout << "void Foo2() printed";
}

int main()
{
	void(*fooPointer)(int a);
	fooPointer = Foo2;
	fooPointer(5);

	return 0;
}
