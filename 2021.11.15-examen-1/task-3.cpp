#include <iostream>

using namespace std;

int nod(int a, int b)
{
	int prom = 0;

	while (a != b)
	{
		if (a > b) 
		{
			prom = a;
			a = b;
			b = prom;
		}
		b = b - a;
	}
	return a;
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int nok = 0;

	cin >> a >> b;

	nok = (a * b) / nod(a, b);

	cout << nok << endl;

	return EXIT_SUCCESS;
}