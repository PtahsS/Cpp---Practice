#include<iostream>
using namespace std;

// Strlen

void Foo(const char* str)
{
	cout << strlen(str);
}

int main()
{
	const char* str =  "Hello,world!";
	
	Foo(str);

	return 0;
}
