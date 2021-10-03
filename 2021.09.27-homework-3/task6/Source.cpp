#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int k = 0;
	int i = 0;
	int cnt_0 = 0;
	int cnt_otr = 0;
	int cnt_pol = 0;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cin >> k;
		if (k == 0)
		{
			++cnt_0;
		}

		else if (k < 0)
		{
			++cnt_otr;
		}

		else
		{
			++cnt_pol;
		}
				
	}

	cout << cnt_0 << " " << cnt_pol << " " << cnt_otr << endl;

	return EXIT_SUCCESS;
}