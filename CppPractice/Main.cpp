#include <iostream>
using namespace std;
// Conditional ternary operator

int main()
{
	int a;
	cout << "Enter your number:  ";
	cin >> a;
	a < 10 ? cout << "It is smaller then 10" :
		a>10 ? cout << "It is bigger then 10" :
		cout << "It is 10!!!";
	
	return 0;
}