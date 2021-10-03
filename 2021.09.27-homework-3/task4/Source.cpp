#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int i = 1;
	int nfac = 1;
	int kfac = 1;
	int fac = 1;


	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		nfac *= i;
	}

	for (int i = 1; i <= k; ++i)
	{
		kfac *= i;
	}

	for (int i = 1; i <= abs(n - k); ++i)
	{
		fac *= i;
	}

	cout << nfac / (kfac * fac) << endl;

	return EXIT_SUCCESS;
}