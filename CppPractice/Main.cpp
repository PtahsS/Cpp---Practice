#include <iostream>
#include<ctime>
using namespace std;

//Assignment statement overload

class ArrAssignment
{
public:
	ArrAssignment(int size)
	{
		this->size = size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	ArrAssignment& operator =(const ArrAssignment& other)
	{
		this->size = other.size;
		if (this->arr != nullptr)
		{
			delete[]this->arr;
		}
		
		this->arr = new int[other.size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i];
		}
		return* this;
	}
	~ArrAssignment()
	{
		delete[]arr;
	}
	void Print()
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->arr[i]<< '\t';
		}
		cout<< this << endl;
	}
private:
	int size;
	int* arr;
};
int main()
{
	srand(time(NULL));
	ArrAssignment a(5);
	ArrAssignment b(5);
	ArrAssignment c(5);

	a.Print();
	b.Print();
	c.Print();
	a = b;
	cout << endl;
	a.Print();
	b.Print();
	c.Print();

	return 0;
}