#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//Циклы
	int count = 0;
	while (count < 10)
	{
		cout << "hello world" << endl;
		count++;
	}

	{
		int c = 1;
		int sum = 0;
		while (c != 0)
		{
			cin >> c;
			sum += c;
		}
		cout << sum << endl;
	}

	return EXIT_SUCCESS;
}