#include<iostream>
using namespace std;

// Stiring. Array of string

void main()
{
	char symbol = 'a';
	cout << symbol << endl;
	char string[] = "Hello";
	cout << string << endl;
	char string1[] = { 'H','e','l','l','o','\0' };
	cout << string1 << endl;
	cout << strlen(string1) << endl;
}
