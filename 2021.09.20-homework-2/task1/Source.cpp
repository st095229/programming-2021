#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a;

	b = a / 100;
	c = a / 10;

	if (a == 0)
	{
		cout << "���� ";
	}

	switch (b % 10)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}

	switch (c % 10)
	{
	case 1:
		switch (a % 10)
		{
		case 0:
			cout << "������ �������" << endl;
			break;
		case 1:
			cout << "����������� �������" << endl;
			break;
		case 2:
			cout << "���������� �������" << endl;
			break;
		case 3:
			cout << "���������� �������" << endl;
			break;
		case 4:
			cout << "������������ �������" << endl;
			break;
		case 5:
			cout << "���������� �������" << endl;
			break;
		case 6:
			cout << "����������� �������" << endl;
			break;
		case 7: 
			cout << "���������� �������" << endl;
			break;
		case 8:
			cout << "������������ �������" << endl;
			break;
		case 9:
			cout << "������������ �������" << endl;

		}
		break;
	case 2:
		cout << "�������� ";
		break;
	case 3:
		cout << "�������� ";
		break;
	case 4:
		cout << "����� ";
		break;
	case 5:
		cout << "��������� ";
		break;
	case 6:
		cout << "���������� ";
		break;
	case 7:
		cout << "��������� ";
		break;
	case 8:
		cout << "����������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}

	if (c % 10 != 1)
	{
		switch (a % 10)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8: 
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		case 0:
			cout << "�������" << endl;
			break;

		}
	}

	return EXIT_SUCCESS;
}