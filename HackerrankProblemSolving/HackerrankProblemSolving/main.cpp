#include "include_easy.h"


void print()
{
	cout << "-----EASY-----\n";
	cout << 1 << ": Solve me first\n";
	cout << 2 << ": Simple array sum\n";
	cout << 3 << ": Compare the triplets\n";
	cout << 4 << ": A very big sum\n";
	cout << 5 << ": Diagonal difference\n";
	cout << 6 << ": Plus minus\n";
	cout << 7 << ": Staircase\n";
	cout << 8 << ": Mini max\n";
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
		case 2: second::simple_array_sum(); break;
		case 3: third::compare_the_triplets(); break;
		case 4: fourth::very_big_sum(); break;
		case 5: fifth::diff(); break;
		case 6: sixth::plus_minus(); break;
		case 7: seventh::staircase_easy(); break;
		case 8: eight::mini_max(); break;
#pragma endregion 

		case 0: break;
		}
	} while (n > 0);
	return 0;
}
