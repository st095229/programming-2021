#include <iostream>
#define M 20

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 10;

	int a[N] = { 0 };

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	const int N = 10;

	int a[M] = { 0 };

	for (int i = 0; i < M; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}