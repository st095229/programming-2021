#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int n;
	int time = 0;
	
	cin >> n;

	

	time = 9 * 60 + n * 45;
	time += (n - 1) * 5;
	time += (n - 1) / 2 * 10;

	cout << time / 60 << ' ' << time % 60;

	return EXIT_SUCCESS;
}
