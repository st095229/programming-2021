#include<iostream>
#include<clocale>
#include<cmath>
#include<ctime>
#include<cstdlib>
//setlocale(LC_ALL, "Russian");
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	cin >> a;
	if (a == 1)
	{
		cout << "Monday" << endl;
	}
	else if (a == 2)
	{
		cout << "Tuesday" << endl;
	}

	switch (a)
	{
	case 1:
		cout << "Mon" << endl;
		break;
	case 2:
		cout << "Tue" << endl;
		break;
	case 3:
		cout << "Wed" << endl;
		break;
	case 4:
		cout << "Thu" << endl;
		break;
	case 5:
		cout << "Fri" << endl;
		break;
	case 6:
		cout << "Sat" << endl;
		break;
	case 7:
		cout << "Sun" << endl;
		break;
	}

	return EXIT_SUCCESS;
}