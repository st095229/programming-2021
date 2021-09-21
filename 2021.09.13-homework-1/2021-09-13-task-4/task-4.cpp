#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int s = 0;

	cin >> v >> t;

	s = v * t;

	if (s > 0) {
		cout << s % 109 << endl;
	}
	else {
		cout << abs(109 - abs(s) % 109) << endl;
	}

	return EXIT_SUCCESS;
}