#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	int i = 0;
	int nfac = 1;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		nfac *= i;
	}

	cout << nfac << endl;


	return EXIT_SUCCESS;
}