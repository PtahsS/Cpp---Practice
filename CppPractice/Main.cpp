#include <iostream>
using namespace std;
//ghghg
int main()
{
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "Enter count of symbols:   ";
		int count;
		cin >> count;
		cout << "Enter symbol:   ";
		char symbol;
		cin >> symbol;
		cout << "Enter direction of row:" << endl
			<< "1 - horizontal," << endl
			<< "2 - vertical" << endl
			<< "Enter suitable number:   ";

		bool check = false;
		char lineType = ' ';
		while (check == false)
		{

			cin >> lineType;
			if (lineType == '1' || lineType == '2')
			{
				check = true;
			}
			else
			{
				cout << "Enter number '1' or '2':   ";
			}
		}
		cout << endl;
		int index = 0;
		while (index < count)
		{
			if (lineType == '1')
			{
				cout << symbol << ' ';
			}
			else
			{
				cout << symbol << endl;
			}
			index++;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	return 0;
}