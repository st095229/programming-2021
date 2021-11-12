#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int cap = 1;
	int sign = 0;
	int choice = 0;
	int* mass = new int[cap] {0};
	int a = 0;
	bool exit = 0;


	cout << " MENU " << endl;
	cout << "0. Close the programm" << endl;
	cout << "1. Print array" << endl;
	cout << "2. Add an element to the end of the array " << endl;
	cout << "3. Add an element to the beginning of the array" << endl;
	cout << "4. Remove the last element of the array" << endl;
	cout << "5. Remove the first element of the array" << endl;
	cout << "6. Expand the array" << endl;
	cout << "7. Back to menu" << endl;

	while (!exit)
	{
		cout << "Choose an action" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: 
			exit = 1;
			cout << "You left the programm";
			break;
		case 1:
			if (sign == 0)
			{
				cout << "Your array is empty";
			}
			else
			{
				cout << "Your array: ";

				for (int i = 0; i < sign; ++i)
				{
					cout << mass[i] << " ";
				}
			}
			cout << endl;
			break;
		case 2: case 3:
			if (sign == cap)
			{
				int* mass_n = new int[2 * cap]{ 0 };
				for (int i = 0; i < cap; ++i)
				{
					mass_n[i] = mass[i];
				}
				delete[] mass;
				mass = mass_n;
				cap *= 2;
			}
			switch (choice)
			{
			case 2:
				cout << "Add an element to the end of the array: ";
				
				cin >> mass[sign];

				break;
			case 3:
				cout << "Add an element to the beginning of the array: ";
				for (int i = sign; i > 0; --i)
				{
					mass[i] = mass[i - 1];
				}
				cin >> mass[0];
				break;
			}
			sign += 1;
			break;
		
		case 4:
			if (sign > 0)
			{
				mass[sign] = 0;
				sign -= 1;
				
				cout << "The last element of the array has been removed" << endl;
			}
			else
			{
				cout << "It is impossible to delete the last element because array is empty" << endl;
			}
			break;
		
		case 5:
			if (sign > 0)
			{
				for (int i = 0; i < sign; ++i)
				{
					mass[i] = mass[i + 1];
				}
				sign -= 1;

				cout << "The first element of the array has been removed" << endl;
			}
			else
			{
				cout << "It is impossible to delete the last element because array is empty" << endl;
			}
			break;
		
		case 6:
			for (int i = 0; i <= (sign - 1) / 2; ++i)
			{
				a = mass[i];

				mass[i] = mass[sign - i - 1];
				mass[sign - i - 1] = a;
			}
			cout << "Your array has been expanded" << endl;
			break;
		
		case 7:
			cout << " MENU " << endl;
			cout << "0. Close the programm" << endl;
			cout << "1. Print array" << endl;
			cout << "2. Add an element to the end of the array " << endl;
			cout << "3. Add an element to the beginning of the array" << endl;
			cout << "4. Remove the last element of the array" << endl;
			cout << "5. Remove the first element of the array" << endl;
			cout << "6. Expand the array" << endl;
			cout << "7. Back to menu" << endl;
			break;

		default:
			cout << "Unknown error. Try again" << endl;
			break;
		}	
		cout << endl;
	}

	delete[] mass;
	return EXIT_SUCCESS;
}