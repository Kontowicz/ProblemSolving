#include "include_easy.h"

void print()
{
	std::vector<std::string> name;
	name.push_back("Solve me first");
 	name.push_back("Simple array sum");
 	name.push_back("Compare the triplets");
	name.push_back("A very big sum");
	name.push_back("Diagonal difference");
	name.push_back("Plus minus");
	name.push_back("Staircase");
	name.push_back("Mini max");
	name.push_back("Birthday cake candles");
	name.push_back("Time conversion");
	name.push_back("Grading");
	name.push_back("Apple and orange");
	name.push_back("Kangaroo");
	name.push_back("Breaking best and worst records");
	name.push_back("The birthday bar");
	name.push_back("Divisible sum pairs");
	name.push_back("Migratory birds");
	name.push_back("Day of the programmer");
	name.push_back("Bon appetit");
	name.push_back("Sock merchant");
	name.push_back("Drawing book");
	name.push_back("Counting valleys");
	name.push_back("Electronic shop");
	name.push_back("Cats and a mouse");
	name.push_back("Picking numbers");
	name.push_back("Utopian tree");
	name.push_back("Camelcase");
	name.push_back("Pangrams");
	name.push_back("Circular array rotation");
	name.push_back("Minimum distances");
	name.push_back("Beautiful triplets");
	name.push_back("Cesar cipher");
	name.push_back("Funny string");
	
	int max_len = name[0].length();
	for(auto it = name.begin(); it!=name.end(); ++it)
	{
		if(max_len< (*it).length())
			max_len = (*it).length();
	}
	
	cout.width(max_len );
	cout << internal << "EASY\n";
	
	for(int i=1; i<name.size(); ++i)
	{
		cout.width(std::to_string(name.size()).length());
		cout << left << i;
		
		cout.width(max_len + 2);
		cout << internal << name[i] << "\n";
	}
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
		case 30: _30::distance(); break;
		case 31: _31::triplets(); break;
		case 32: _32::cesar(); break;
		case 33: _33::funny(); break;
#pragma endregion 

		case 0: break;
		}
	} while (n > 0);
	return 0;
}

