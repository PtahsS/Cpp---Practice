#include <iostream>
using namespace std;

// Link and pointer

int main()
{
	int a = 5;
	int* pa = &a;
	int& aref = a;


	cout << "a: " << a << endl;
	cout << "aref" << '\t' << aref << endl;
	aref = aref + 2;
	cout << "aref" << '\t' << aref << endl;
	aref = 555;
	cout << "a: " << a << endl;
	cout << "pa:  " << pa << endl
		<< "*pa:  " << *pa << endl;
	return 0;
}
