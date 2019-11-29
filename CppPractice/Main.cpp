#include <iostream>
using namespace std;

// Overloading parameter classes

class Point
{
public:
	Point()
	{
		this->x = 0;
		this->y = 0;
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void SetX(int x)
	{
		this->x = x;
	}
	void SetY(int y)
	{
		this->y = y;
	}
	int GetX()
	{
		return this->x;
	}
	int GetY()
	{
		return this->y;
	}
	void Print()
	{
		cout << x << " : " << y << endl;
	}
private:
	int x;
	int y;
};

int main()
{
	int x = 4;
	int y = 5;
	Point a;
	a.Print();
	a.SetX(10);
	a.Print();
	Point b(6, 17);
	b.Print();
	int c = b.GetY();
	cout << c;


	return 0;
}

