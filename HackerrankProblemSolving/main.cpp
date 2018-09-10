#include "include_easy.h"
#include "hackerrank_in_a_string_easy.h"


void print()
{
	std::vector<std::string> name;
	name.emplace_back("solve me first");
 	name.emplace_back("simple array sum");
 	name.emplace_back("compare the triplets");
	name.emplace_back("a very big sum");
	name.emplace_back("diagonal difference");
	name.emplace_back("plus minus");
	name.emplace_back("staircase");
	name.emplace_back("mini max");
	name.emplace_back("birthday cake candles");
	name.emplace_back("time conversion");
	name.emplace_back("grading");
	name.emplace_back("apple and orange");
	name.emplace_back("kangaroo");
	name.emplace_back("breaking best and worst records");
	name.emplace_back("the birthday bar");
	name.emplace_back("divisible sum pairs");
	name.emplace_back("migratory birds");
	name.emplace_back("day of the programmer");
	name.emplace_back("bon appetit");
	name.emplace_back("sock merchant");
	name.emplace_back("drawing book");
	name.emplace_back("counting valleys");
	name.emplace_back("electronic shop");
	name.emplace_back("cats and a mouse");
	name.emplace_back("picking numbers");
	name.emplace_back("utopian tree");
	name.emplace_back("camelcase");
	name.emplace_back("pangrams");
	name.emplace_back("circular array rotation");
	name.emplace_back("minimum distances");
	name.emplace_back("beautiful triplets");
	name.emplace_back("cesar cipher");
	name.emplace_back("funny string");
	name.emplace_back("repeated string");
	name.emplace_back("designer pdf viewer");
	name.emplace_back("the birthday bar");
	name.emplace_back("angry professor");
	name.emplace_back("beautiful days at the movies");
	name.emplace_back("strange advertising");
	name.emplace_back("tutorial intro");
	name.emplace_back("jumping on the clouds revisited");
	name.emplace_back("cut the sticks");
	name.emplace_back("service lane");
	name.emplace_back("strong password");
	name.emplace_back("the love letter mystery");
	name.emplace_back("jumping on the clouds");
	name.emplace_back("hackerrank in a string");
	name.emplace_back("save the prisoner");
	name.emplace_back("permutatuin equation");
	name.emplace_back("find digits");
	name.emplace_back("append and delete");
	name.emplace_back("sherlock and squares");
	name.emplace_back("equality in a array");
#pragma region print
	int max_len = name[0].length();
	for(auto it = name.begin(); it!=name.end(); ++it)
	{
		if(max_len< (*it).length())
			max_len = (*it).length();
	}
	
	cout.width(max_len + std::to_string(name.size()).length() );

	cout  << "easy\n";
	int cnt(1);
	for(int i=0; i<name.size(); ++i)
	{
		cout.width(std::to_string(name.size()).length());
		cout << std::left << cnt++;
		
		cout.width(max_len + 2);
		cout.fill('-');
		cout << std::internal << name[i] << "\n";
	}
#pragma endregion 
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
		case 37: _37::angry(); break;
		case 38: _38::day(); break;
		case 39: _39::viral(); break;
		case 40: _40::tutorial(); break;
		case 41: _41::jumping(); break;
		case 42: _42::cut(); break;
		case 43: _43::service(); break;
		case 44: _44::strong(); break;
		case 45: _45::love(); break;
		case 46: _46::jumping(); break;
		case 47: _47::string(); break;
		case 48: _48::save(); break;
		case 49: _49::permutation(); break;
		case 50: _50::find_digit(); break;
		case 51: _51::append(); break;
		case 52: _52::sherlock(); break;
		case 53: _53::equality(); break;
#pragma endregion 
			
		case 0: break;
		}
	} while (n > 0);
	return 0;
}