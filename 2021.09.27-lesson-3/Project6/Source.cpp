#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cout << setw(2) << i + j << " ";
		}
		cout << endl;
	}
	return EXIT_SUCCESS;
}