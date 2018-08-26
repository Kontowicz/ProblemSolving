#include "include_easy.h"
#include "divisible_sum_pairs_easy.h"


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
	cout << 9 << ": Birthday cake candles\n";
	cout << 10 << ": Time conversion\n";
	cout << 11 << ": Grading\n";
	cout << 12 << ": Apple and orange\n";
	cout << 13 << ": Kangaroo\n";
	cout << 14 << ": Breaking best and worst records\n";
	cout << 15 << ": The birthday bar\n";
	cout << 16 << ": Divisible sum pairs\n";
	cout << 17 << ": Migratory birds\n";
	cout << 18 << ": Day of the programmer\n";
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
#pragma region easy
		case 1: first::solve_me_first(); break;
		case 2: second::simple_array_sum(); break;
		case 3: third::compare_the_triplets(); break;
		case 4: fourth::very_big_sum(); break;
		case 5: fifth::diff(); break;
		case 6: sixth::plus_minus(); break;
		case 7: seventh::staircase_easy(); break;
		case 8: eight::mini_max(); break;
		case 9: ninth::cake(); break;
		case 10: tenth::time_conv(); break;
		case 11: eleventh::grade(); break;
		case 12: twelfth::apple_orange(); break;
		case 13: thirteenth::kangaroo_(); break;
		case 14: fourteenth::breaking(); break;
		case 15: fifteenth::bar(); break;
		case 16: sixteenth::divisible(); break;
		case 17: seventeenth::birds(); break;
		case 18: eighteenth::day_of_pragrammer(); break;
#pragma endregion 

		case 0: break;
		}
	} while (n > 0);
	return 0;
}


#include <vector>
