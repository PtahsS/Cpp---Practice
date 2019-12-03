#include <iostream>
using namespace std;

// Overloading operators (increment, decrement...)

class Point
{
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int valueX, int valueY)
	{
		x = valueX;
		y=valueY;
	}
	bool operator ==(const Point& other)
	{
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
	bool operator <(const Point& other)
	{
		return(this->x < other.x && this->y < other.y);
	}
	bool operator >(const Point& other)
	{
		return(this->x > other.x && this->y > other.y);
	}
	Point operator +(const Point& const  other)
	{
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}
	
	Point& operator ++()   //prefixed increment
	{
		this->x++;
		this->y++;
		return*this;
	}
	Point operator ++(int value)   //postfixed increment
	{
		Point temp;
		temp.x = this->x;
		temp.y = this->y;
			this->x++;
			this->y++;
		return temp;
	}
	Point& operator --()   //prefixed decrement
	{
		this->x--;
		this->y--;
		return*this;
	}
	Point operator --(int value)   //postfixed decrement
	{
		Point temp1(*this);
		this->x--;
		this->y--;
		return temp1;
	}
	void Print()
	{
		cout << x << ":" << y << endl;
	}
private:
	int x;
	int y;
};


int main()
{
	Point a(10, 19);
	Point b(20, 7);
	Point c(10, 19);

	bool result1 = (a == b);
	bool result2 = (a == c);

	cout<< result1;
	cout << result2;
	cout << endl;
	Point d;
	d = a + b;
	d.Print();
	++d;
	d.Print();
	bool result3 = (a < d);
	cout << result3;
	cout << endl;
	bool result4 = (b > c);
	cout << result4;

	a = b;
	cout << endl;
	a.Print();
	d.Print();
	b =a  + d--;
	b.Print();
	d.Print();
	return 0;
	
}