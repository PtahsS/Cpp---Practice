#include <iostream>
using namespace std;

// Overloading the equality and inequality operator


class Point
{
public:
	Point(int x, int y)
	{
		this->x = x; 
		this->y = y;
	}

	bool operator ==(const Point& other)
	{
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
	
private:
	int x;
	int y;
};


int main()
{
	Point a(5, 10);
	Point b(5, 50);
	Point c(5, 10);
	bool result1 = (a == b);
	cout << result1 << endl;

	bool result2 = (a == c);
	cout << result2 << endl;

	return 0;
}