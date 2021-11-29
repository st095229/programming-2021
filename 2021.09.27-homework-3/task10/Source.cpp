#include <iostream>
#include <math.h> 

using namespace std;

int main(int argc, char* argv[])
{
	int i = 0;
	int a = 0;
	int b = 0;
	int q = 0;

	cin >> a >> b;

	for (int i = a; i <= b; ++i)
	{
		q = round(pow(i, 0.5));
		if ((q * q) == i)
		{
			cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}