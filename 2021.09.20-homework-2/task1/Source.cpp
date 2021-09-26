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
		cout << "ноль ";
	}

	switch (b % 10)
	{
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}

	switch (c % 10)
	{
	case 1:
		switch (a % 10)
		{
		case 0:
			cout << "десять бананов" << endl;
			break;
		case 1:
			cout << "одиннадцать бананов" << endl;
			break;
		case 2:
			cout << "двенадцать бананов" << endl;
			break;
		case 3:
			cout << "тринадцать бананов" << endl;
			break;
		case 4:
			cout << "четырнадцать бананов" << endl;
			break;
		case 5:
			cout << "пятнадцать бананов" << endl;
			break;
		case 6:
			cout << "шестнадцать бананов" << endl;
			break;
		case 7: 
			cout << "семнадцать бананов" << endl;
			break;
		case 8:
			cout << "восемнадцать бананов" << endl;
			break;
		case 9:
			cout << "девятнадцать бананов" << endl;

		}
		break;
	case 2:
		cout << "двадцать ";
		break;
	case 3:
		cout << "тридцать ";
		break;
	case 4:
		cout << "сорок ";
		break;
	case 5:
		cout << "пятьдесят ";
		break;
	case 6:
		cout << "шестьдесят ";
		break;
	case 7:
		cout << "семьдесят ";
		break;
	case 8:
		cout << "восемьдесят ";
		break;
	case 9:
		cout << "девяносто ";
		break;
	}

	if (c % 10 != 1)
	{
		switch (a % 10)
		{
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8: 
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
		case 0:
			cout << "бананов" << endl;
			break;

		}
	}

	return EXIT_SUCCESS;
}