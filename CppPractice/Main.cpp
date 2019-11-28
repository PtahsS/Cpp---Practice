#include<iostream>
#include<string>
using namespace std;

// Bool argument of function


void ShowInfo(bool fromSpace)
{
	fromSpace?cout << "Information from space":cout << "No info";
	
}

int main()
{
	ShowInfo(true);

	return 0;
}
