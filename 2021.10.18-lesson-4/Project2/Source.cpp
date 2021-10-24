#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//массивы
	int a0 = 0;
	int a1 = 4;
	int a2 = 15;

	int a[3] = { 0 }; 
	
	/*
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	*/

	for (int i = 0; i < 3; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int b[5] = { 4, 2, 1, 6, 5 };
	int c[5] = { 1, 2, 4, 9, 14 };
	
	for (int i = 0; i < 5; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < 5; ++i)
	{
		cout << c[i] << " ";
	}
	cout << endl;


	return EXIT_SUCCESS;
}