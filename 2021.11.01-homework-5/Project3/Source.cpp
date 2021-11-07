#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
	double k = 0;
	
	cin >> k;
	
	long long value = *((long long*)&k);
	long long one = 1;
	long long absk1 = ~(~value | (one << sizeof(double) * 8 - 1));
	double absk2 = *((double*)&absk1);
	cout << absk2 << endl;

	return EXIT_SUCCESS;
}