#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
	{
		cout << "right" << endl;
	}
	
	return EXIT_SUCCESS;
}