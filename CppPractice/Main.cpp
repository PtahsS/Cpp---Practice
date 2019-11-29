#include <iostream>
using namespace std;

// Get, set methods.Encapsulation

class Point
{
private:
	int x;
	int y;
public:
	void SetX(int x)
	{
		this->x =x ;
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
		cout << "x: " << this->x << "y:  " << this->y << endl;
	}
};

int main()
{
	Point a;
	a.SetX(5);
	a.SetY(10);
	a.Print();
	int c = a.GetX();
	cout << "c:  " << c << endl;
	return 0;
}