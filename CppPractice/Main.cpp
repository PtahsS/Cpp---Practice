#include <iostream>
#include <string>
using namespace std;

//Class access modifier

class Point
{
public:
	int x = 9;

	void Print()
	{
		cout << "y= " << y << "\n"<<
				"x= " << x << "\n" <<
				"z = " << z << endl;
	}

private:
	int z = 8;
	int y = 7;
};

int main()
{
	Point a;
	a.Print();
}
