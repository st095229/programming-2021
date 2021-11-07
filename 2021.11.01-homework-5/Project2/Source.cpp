#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
	double a = 0;
	
	cin >> a;
	
	long long val = *((long long*)&a);
	
	for (long long i = 0; i < sizeof(double) * 8; ++i)
	{
		long long bit = 0;
		long long perv = 1;
		
		bit = ((perv << ((sizeof(double) * 8) - i - 1)) & val) >> ((sizeof(double) * 8) - i - 1);
		
		cout << bit;
		
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}

	return EXIT_SUCCESS;
}