#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b;

	swap(a, b);

	cout << a << " " << b << endl; 

	return EXIT_SUCCESS;

}