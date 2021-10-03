#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 1;
	int i = 0;
	int j = 0;

	cin >> n;

	for (int i = 1; k <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (k > n)
			{
				break;
			}
			cout << k++ << " ";
		}
		cout << "\n";
	}

	return EXIT_SUCCESS;
}