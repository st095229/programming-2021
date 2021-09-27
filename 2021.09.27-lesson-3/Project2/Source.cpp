#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 10;

	cout << a << endl;
	{
		cout << a << endl;
		a = 30;
		int a = 20;
		cout << a << endl;
		a = 10;
		cout << a << endl;
	}
	cout << a << endl;

	return EXIT_SUCCESS;
}