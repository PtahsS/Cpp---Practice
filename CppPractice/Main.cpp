#include <iostream>
#include <string>
using namespace std;
// Class Human. OOP

class Human
{
public:
	int age;
	string name;
	int weight;

private:
};
int main()
{
	Human Petrov;
	Petrov.age = 30;
	Petrov.name = "Ivan";
	Petrov.weight = 100;

	cout << "My name is " << Petrov.name << ", I am "
		<< Petrov.age << " years old. My weight is "
		<< Petrov.weight << " kg.";

	return 0;
}