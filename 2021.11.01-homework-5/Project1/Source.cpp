#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int pos1 = 0;
	int pos2 = 0;
	int bit1 = 0;
	int bit2 = 0;
	int n = 0;

	cin >> a >> pos1 >> pos2;
	
	bit1 = ((1 << pos1) & a) >> pos1;
	bit2 = ((1 << pos2) & a) >> pos2;
	n = ((~((1 << pos1) | (1 << pos2))) & a) | (bit1 << pos2) | (bit2 << pos1);
	
	cout << n << endl;

	return EXIT_SUCCESS;
}