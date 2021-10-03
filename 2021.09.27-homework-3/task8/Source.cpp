#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int k = 0;
	int sum = 0;
	int i = 0;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cin >> k;
		sum += k;
	}

	cout << sum << endl;

	return EXIT_SUCCESS;
}