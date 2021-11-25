#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0; 
	int max = 0; 
	int *arr = new int[1000];
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) 
	{
		if (i == 0)
		{
			m = arr[n - 1] + arr[0] + arr[1];
		}
		else if (i == n - 1)
		{
			m = arr[n - 2] + arr[n - 1] + arr[0];
		}
		else
		{
			m = arr[i - 1] + arr[i] + arr[i + 1];
		}
		if (m > max) max = m;
	}
	
	cout << max;
	
	return EXIT_SUCCESS;
}