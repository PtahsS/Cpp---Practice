#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "Введите количество символов:   ";
		int count;
		cin >> count;
		cout << "Введите символ:   ";
		char symbol;
		cin >> symbol;
		cout << "Выберите направление строки:" << endl
			<< "1 - горизонтальное," << endl
			<< "2 - вертикальноею" << endl
			<< "Введите соответствующее число:   ";

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
				cout << "Введите число 1 или 2:   ";
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