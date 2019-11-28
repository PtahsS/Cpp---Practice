#include<iostream>
using namespace std;

// StrCat. Contatenation of strings.




int main()
{
	char a[100] = "Concatenation ";
	char b[100] = "of string";
	strcat_s(a, b);
	cout << a;
	return 0;
}
