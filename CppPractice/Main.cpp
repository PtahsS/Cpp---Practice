#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "������� ���������� ��������:   ";
		int count;
		cin >> count;
		cout << "������� ������:   ";
		char symbol;
		cin >> symbol;
		cout << "�������� ����������� ������:" << endl
			<< "1 - ��������������," << endl
			<< "2 - �������������" << endl
			<< "������� ��������������� �����:   ";

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
				cout << "������� ����� 1 ��� 2:   ";
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