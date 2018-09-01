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
	cout << 19 << ": Bon appetit\n";
	cout << 20 << ": Sock merchant\n";
	cout << 21 << ": Drawing book\n";
	cout << 22 << ": Counting valleys\n";
	cout << 23 << ": Electronic shop\n";
	cout << 24 << ": Cats and a mouse\n";
	cout << 25 << ": Picking numbers\n";
	cout << 26 << ": Utopian tree\n";
	cout << 27 << ": Camelcase\n";
	cout << 28 << ": Pangrams\n";
	cout << 29 << ": Circular array rotation\n";
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
		case 1: _1::solve_me_first(); break;
		case 2: _2::simple_array_sum(); break;
		case 3: _3::compare_the_triplets(); break;
		case 4: _4::very_big_sum(); break;
		case 5: _5::diff(); break;
		case 6: _6::plus_minus(); break;
		case 7: _7::staircase_easy(); break;
		case 8: _8::mini_max(); break;
		case 9: _9::cake(); break;
		case 10: _10::time_conv(); break;
		case 11: _11::grade(); break;
		case 12: _12::apple_orange(); break;
		case 13: _13::kangaroo_(); break;
		case 14: _14::breaking(); break;
		case 15: _15::bar(); break;
		case 16: _16::divisible(); break;
		case 17: _17::birds(); break;
		case 18: _18::day_of_pragrammer(); break;
		case 19: _19::bon_app(); break;
		case 20: _20::sock(); break;
		case 21: _21::book(); break;
		case 22: _22::val(); break;
		case 23: _23::shop(); break;
		case 24: _24::cat(); break;
		case 25: _25::pick(); break;
		case 26: _26::tree(); break;
		case 27: _27::camelcase(); break;
		case 28: _28::pangrams(); break;
		case 29: _29::circular(); break;
#pragma endregion 

		case 0: break;
		}
	} while (n > 0);
	return 0;
}

