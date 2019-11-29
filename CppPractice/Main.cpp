#include <iostream>
using namespace std;

// Overloading parameter classes 2

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
	Point(bool a, bool b)
	{
		a ? this->x = 1000 : this->y = 0;
		b ? this->y = 1000 : this->y = 0;
	}
	Point(string str)
	{
		str == "top" ? (this->x = 500, this->y = 1000) : (this->x = 20, this->y = 20);
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
	Point b(6, 17);
	b.Print();
	Point c(true, false);
	c.Print();
	Point s("top");
	s.Print();
	Point f("mistake");
	f.Print();

	return 0;
}

