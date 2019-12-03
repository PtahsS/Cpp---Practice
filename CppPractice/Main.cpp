#include <iostream>
using namespace std;

//class String (handmade)

class MyString
{
public:
	MyString()
	{
		this->size = 0;
		this->arr = nullptr;
	}
	MyString(const char* arr)
	{
		this->size = strlen(arr);
		this->arr = new char[this->size+1];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = arr[i];
		}
		this->arr[this->size] = '\0';
	}
	 MyString(const MyString& other)
	{
		this->size = other.size;
		this->arr = new char[this->size + 1];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = other.arr[i];
		}
		this->arr[this->size] = '\0';
	}
	 MyString& operator =(const MyString& other)
	 {
		 if (this->arr != nullptr)
		 {
			 delete[]arr;
		 }
		 this->size = other.size;
		 this->arr = new char[this->size + 1];
		 for (int i = 0; i < size; i++)
		 {
			 this->arr[i] = other.arr[i];
		 }
		 this->arr[this->size] = '\0';
		 return *this;
	 }
	 MyString operator +(const MyString& other)
	 {
		 MyString temp;
		 temp.size = this->size + other.size;
		 temp.arr = new char[this->size + other.size + 1];
		 int i = 0;
		 for(; i < this->size; i++)
		 {
			 temp.arr[i] = this->arr[i];
		 }
		 for (int j = 0; j < other.size; j++, i++)
		 {
			 temp.arr[i] = other.arr[j];
		 }
		 temp.arr[temp.size] = '\0';
		 return temp;
	 }
	 MyString& operator +=(const MyString& other)
	 {
		 int size1 = this->size;
		 int size2 = other.size;
		 MyString temp;
		 temp.size = size1 + size2;
		 temp.arr = new char[size1 + size2 + 1];
		 int i = 0;
		 for (; i < size1; i++)
		 {
			 temp.arr[i] = this->arr[i];
		 }
		 for (int j = 0; j < size2; j++, i++)
		 {
			 temp.arr[i] = other.arr[j];
		 }
		 temp.arr[temp.size] = '\0';
		 if (this->arr != nullptr)
		 {	 
			 delete[] this->arr;
		 }
		 this->size = size1+size2;
		 this->arr = new char[size1+size2+1];
		 for (int i = 0; i < this->size; i++)
		 {
			 this->arr[i] = temp.arr[i];
		 }
		 this->arr[this->size] = '\0';
		 return* this;
	 }
	 void Print() {
		 cout<< arr << endl;
	 }
	~MyString()
	{
			delete[]arr;
	}
private:
	int size;
	char* arr;
};

int main()
{
	MyString s1("October ");
	MyString s2("sun");
	
	s1.Print();
	s2.Print();
	cout << "= operator. Answer of s1 = s2 is:" << endl;
	s1 = s2;
	s1.Print();
	s1.Print();
	cout << endl;

	MyString s3("Black ");
	MyString s4("see");
	s3.Print();
	s4.Print();
	cout << "+operator. Answer of 'result = s3 + s4' is:" << endl;
	MyString result;
	result = s3 + s4;
	result.Print();
	cout << endl;
	
	MyString s5("My dog ");
	MyString s6("is barking now.");
	s5.Print();
	s6.Print();
	cout << "+= operator. Answer of s5+=s6 is:" << endl;
	s5 += s6;
	s5.Print();
	

	return 0;
}