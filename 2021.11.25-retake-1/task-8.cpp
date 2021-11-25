#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int prom = 0;
	int summ = 0;
	
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= N; ++j)
		{
			cin >> prom;
			summ += prom;
		}
	}
	
	cout << summ / 2;
	
	return EXIT_SUCCESS;
}
