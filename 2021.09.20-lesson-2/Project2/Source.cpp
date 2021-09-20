#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;

	if ((a > 0) && (a < 10)) 
	{
		cout << a << endl; 
	}
	if ((a <= 3) || (a >= 8))
	{
		cout << a << endl;
	}

	bool b = (a < 7);
	if (!b)
	{
		cout << a << endl;
	}
}