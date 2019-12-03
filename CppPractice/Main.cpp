#include <iostream>
using namespace std;
// Indexing operator overload

class TestClass
{
public:
	int& operator [](int index) // Если убрать амперсанд, 
	{							//мы не сможем менять значения массива.
		return arr[index];
	}
private:
	int arr[5]{5, 44, 4, 987, 69};
};

int main()
{
	setlocale(LC_ALL, "ru");
	TestClass a;
	cout << a[2] << endl;
	a[2] = 100;
	cout << a[2] << endl;

	return 0;
}
