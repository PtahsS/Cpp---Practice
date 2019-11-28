#include<iostream>
#include<string>
using namespace std;

//Pass function pointer to the function as argument

string InfoSource()
{
	return "I ma from Japain";
}
void ShowInfo(string (*foo)())
{
	cout << foo() << endl;
	
}

int main()
{
	ShowInfo(InfoSource);

	return 0;
}
