#include <iostream>
using namespace std;

// Count sum of all even numbers in a range.

int main()
{
	cout << "Enter lower range:   ";
	int lowerRange;
	cin >> lowerRange;

	cout << "Enter bigger range:   ";
	int biggerRange;
	cin >> biggerRange;

	int sum = 0;
	for (lowerRange; lowerRange < biggerRange; lowerRange++)
	{
		if (lowerRange % 2 == 0)
			sum += lowerRange;
	}
	cout << "Sum of all even numbers is   " << sum << endl;
	
	return 0;
}