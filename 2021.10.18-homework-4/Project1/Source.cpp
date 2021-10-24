#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int k = 100;
	int n = 0;
	int sum = 0;
	int pneg = 1;
	int cnt = 0;
	int min = 0;
	int minid = 0;
	int max = 0;
	int max_2 = 0;
	
	cin >> n;

	int arr[k] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << "ARRAY : ";

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl << "EVEN : ";

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}

	cout << endl << "SUM : ";

	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	
	cout << sum << endl << "PRODUCT OF NEGATIVE : ";

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < 0)
		{
			pneg = pneg * arr[i];
			cnt += 1;
		}
	}

	if (cnt = 0)
	{
		cout << "0" << endl << "FIRST MIN INDEX : ";
	}

	else
	{
		cout << pneg << endl << "FIRST MIN INDEX : ";
	}

	min = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (min == arr[i])
		{
			minid = i;
			break;
		}
	}
	
	cout << minid << endl << "SECOND MAX : ";
	
	max = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	max_2 = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (max_2 < arr[i] && arr[i] < max)
		{
			max_2 = arr[i];
		}
	}
	
	cout << max_2 << endl << "REVERSE : ";

	for (int i = n - 1; i >= 0; --i)
	{
		cout << arr[i] << " ";
	}

	cout << endl << "ODD INDEXES : ";

	for (int i = 1; i < n; i += 2)
	{
		cout << arr[i] << " ";
	}

	return EXIT_SUCCESS;
}