#include "include_easy.h"
#include "the_hurdle_race_easy.h"

void print()
{
	std::vector<std::string> name;
	name.emplace_back("Solve me first");
 	name.emplace_back("Simple array sum");
 	name.emplace_back("Compare the triplets");
	name.emplace_back("A very big sum");
	name.emplace_back("Diagonal difference");
	name.emplace_back("Plus minus");
	name.emplace_back("Staircase");
	name.emplace_back("Mini max");
	name.emplace_back("Birthday cake candles");
	name.emplace_back("Time conversion");
	name.emplace_back("Grading");
	name.emplace_back("Apple and orange");
	name.emplace_back("Kangaroo");
	name.emplace_back("Breaking best and worst records");
	name.emplace_back("The birthday bar");
	name.emplace_back("Divisible sum pairs");
	name.emplace_back("Migratory birds");
	name.emplace_back("Day of the programmer");
	name.emplace_back("Bon appetit");
	name.emplace_back("Sock merchant");
	name.emplace_back("Drawing book");
	name.emplace_back("Counting valleys");
	name.emplace_back("Electronic shop");
	name.emplace_back("Cats and a mouse");
	name.emplace_back("Picking numbers");
	name.emplace_back("Utopian tree");
	name.emplace_back("Camelcase");
	name.emplace_back("Pangrams");
	name.emplace_back("Circular array rotation");
	name.emplace_back("Minimum distances");
	name.emplace_back("Beautiful triplets");
	name.emplace_back("Cesar cipher");
	name.emplace_back("Funny string");
	name.emplace_back("Repeated string");
	name.emplace_back("Designer pdf viewer");
	name.emplace_back("The birthday bar");
	name.emplace_back("Angry professor");
	
	int max_len = name[0].length();
	for(auto it = name.begin(); it!=name.end(); ++it)
	{
		if(max_len< (*it).length())
			max_len = (*it).length();
	}
	
	cout.width(max_len + std::to_string(name.size()).length() );

	cout  << "EASY\n";
	
	for(int i=1; i<name.size(); ++i)
	{
		cout.width(std::to_string(name.size()).length());
		cout << std::left << i;
		
		cout.width(max_len + 2);
		cout.fill('-');
		cout << std::internal << name[i] << "\n";
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
		case 34: _34::repeated(); break;
		case 35: _35::designer(); break;
		case 36: _36::hurdle(); break;
#pragma endregion 

		case 0: break;
		}
	} while (n > 0);
	return 0;
}

