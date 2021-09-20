#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	if (a > b)
	{
		cout << a << endl;
	}
	else if (b > a)
	{
		cout << b << endl;
	}
	else
	{
		cout << "EQUALS" << endl; 
	}
}