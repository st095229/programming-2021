#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int res = 1;
	int i = 0;

	cin >> n;

	{
		for (int i = 1; i <= n; ++i)
		{
			res = res * 2;
		}	
	}
	
	cout << res << endl;

	return EXIT_SUCCESS;
}
