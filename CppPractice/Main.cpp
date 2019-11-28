#include<iostream>
using namespace std;
#define DEBUG

//Conditional compilation. DEBUG

int main()
{
	int value = 0;
#ifdef DEBUG
	cout << "Begin to start" << endl;
#endif
	for (int i = 0; i < 10; i++)
	{
		value++;
	}
#ifdef DEBUG
	cout << "End of circle" << endl;
#endif
	return 0;
}