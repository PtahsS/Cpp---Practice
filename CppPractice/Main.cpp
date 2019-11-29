#include <iostream>
using namespace std;

// Copy constructor.

class MyClass
{
public:
	MyClass(int size)
	{
		cout << "arr building   " << this << endl;
		this->size = size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = i;
		}
	}
	MyClass(const MyClass& other)
	{
		cout << "copying array   " << this << endl;
		this->size = other.size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i]+3;
		}
	}
	void Print()
	{
		cout << "Printing.....  " << this << endl;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << "  ";
		}
		cout << endl;
	}
	~MyClass()
	{
		
		delete[] arr;
		cout << "destructor   " << this<< endl;
	}
private:
	int size;
	int* arr;
};
int main()
{
	MyClass a(7);
	MyClass b(a);
	a.Print();
	b.Print();

	return 0;
}