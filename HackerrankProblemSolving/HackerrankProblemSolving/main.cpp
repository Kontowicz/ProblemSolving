#include "include_easy.h"


void print()
{
	cout << "-----EASY-----\n";
	cout << 1 << "Solve me first\n";
}

int main()
{
	int n(0);
	do
	{
		print();
		cin >> n;
		cin.clear();
		cin.ignore();
		switch (n)
		{
#pragma region EASY
		case 1: first::solve_me_first(); break;
#pragma endregion 

		case 0: break;
		}
	} while (n > 0);
	return 0;
}
