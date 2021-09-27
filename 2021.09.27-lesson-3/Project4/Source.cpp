#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	{
		int i = 0;
		while (i < 10)
		{
			cout << i << " ";
			++i;
		}
		cout << endl;
	}

	{
		for (int i = 0; i < 10; ++i)
		{
			cout << i << " ";
		}
	}

	{
		for (int i = 0, j = 10; i < 10 && j > 0; ++i, --j)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	return EXIT_SUCCESS;
}