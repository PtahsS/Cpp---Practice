#include<iostream>
using namespace std;

// StrLen making

void StrLen(const char* str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	cout << size;
}

int main()
{
	const char* str =  "Hello,world!";
	
	cout << str << endl;

	StrLen(str);

	return 0;
}
