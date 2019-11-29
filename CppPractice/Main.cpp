#include <iostream>
using namespace std;

//Encapsulation example "CompOn"

class CompOn
{
public:
	void Start()
	{
		isWorking() ? cout << "It is working" : cout << "You have to repair it.";
	}
private:
	bool isWorking()
	{
		return false;
	}
};
int main()
{
	CompOn a;
	a.Start();

	return 0;
}
