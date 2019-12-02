// Class String handmade.

#include <iostream>
using namespace std;

class MyString
{
public:
	MyString()
	{
		this->length = 0;
		arr = nullptr;
	}
	MyString(const char* str)
	{
		this->length = strlen(str);
		this->arr = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			this->arr[i] = str[i];
		}
		this->arr[length] = '\0';
	}
	MyString& operator = (const MyString& other)
	{
		if (this->arr != nullptr)
		{
			delete[] arr;
		}
		this->arr = new char[other.length + 1];
		for (int i = 0; i < other.length; i++)
		{
			this->arr[i] = other.arr[i];
		}
		this->arr[length] = '\0';
		return*this;
	}
	void Print()
	{
		cout << arr;
	}
		~MyString()
	{
			delete[]arr;
	}

private:
	char* arr;
	int length;
};

int main()
{
	MyString s1("Hello");
	MyString s2("world");

	s1.Print();
	s2.Print();

	s1 = s2;

	cout << endl;

	s1.Print();
	cout << endl;
	s2.Print();

	return 0;
}