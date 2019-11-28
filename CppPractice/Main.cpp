#include<iostream>
#define DEBUG 8
using namespace std;

//Conditional compilation. ifdef else endif

int main()
{
#if DEBUG == 10
	cout << "I love mathematic";
#elif DEBUG>5
	cout << "I love english";
#endif
	
	return 0;
}