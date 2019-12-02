#include <iostream>
using namespace std;

// Overloading the addition operator

class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Point()
	{
		this->x = 0;
		this->y = 0;
	}
	
	bool operator ==(const Point& other)
	{
		return (this->x == other.x && this->y == other.y);
	}
	bool operator !=(const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
	Point operator +(const Point& other)
	{
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}

	void Print()
	{
		cout << x << " : " << y<< endl;
	}
private:
	int x;
	int y;
};

int main()
{
	Point a(5, 10);
	Point b(10, 15);
	Point c(5, 10);

	a.Print();
	b.Print();
	c.Print();
	cout << endl;

	cout << "a==b" << (a == b) << endl;
	cout << "a!=b" << (a != b) << endl;
	cout << "a==c" << (a == c) << endl << endl;

	Point d= a + b;

	d.Print();


	return 0;
}