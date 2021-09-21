#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;

	cin >> v >> t;

	int s = v * t;

	cout << ((109 + s % 109) % 109) << endl;

	return EXIT_SUCCESS;
}