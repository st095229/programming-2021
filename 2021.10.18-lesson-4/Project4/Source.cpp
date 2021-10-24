#include <iostream>
#include <cstdlib>


using namespace std;

int main(int argc, char* argv[])
{
	const int N = 20;
	
	int a[N] = { 0 };

	for (int i = 0; i < N; ++i)
	{
		a[i] = rand();
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	srand(time(0));
	int min = 10;
	int max = 99;

	for (int i = 0; i < N; ++i)
	{
		a[i] = rand() % (max - min + 1) + min;
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}