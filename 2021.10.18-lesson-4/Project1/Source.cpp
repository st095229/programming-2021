#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}
	cout << endl;

	//goto
	{
	vasya:
		int i = 0;
		goto kolya;

	petya:
		++i;
		goto kolya;

	kolya:
		cout << i << " ";
		goto tanya;

	misha:
		cout << endl;
		goto vsyo;

	tanya:
		if (i < 10)
		{
			goto kolya;
		}
		else
		{
			goto misha;
		}
	vsyo:
		;
	}
	return EXIT_SUCCESS;
}