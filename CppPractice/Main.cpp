#include <iostream>
using namespace std;

// Destructor

class Mydata
{
public:
	Mydata( int size)
	{
		this ->size = size;
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
	}
	
	void Print()
	{
		cout << "Creating data" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << data[i] << "  ";
		}
		cout << endl;
	}
	~Mydata()
	{
		delete[] data;
		cout << "destructor" << endl;
	}
	
private:
	int* data;
	int size;
};
void Go()
	{
		for (int i = 0; i < 4; i++)
		{
			Mydata a(5);
			a.Print();
		}
	}
int main()
{
	Go();

	return 0;
}
