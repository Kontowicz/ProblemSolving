#include "include_easy.h"

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
	name.emplace_back("chocolate fest");
	name.emplace_back("cavity map");
	name.emplace_back("kaprekar numbers");
	name.emplace_back("taum and bday");
	name.emplace_back("hallowenn sale");
	name.emplace_back("fair rations");
	name.emplace_back("strange code");
	name.emplace_back("big sorting");
	name.emplace_back("flatland space stations");
	name.emplace_back("happy ladyburgs");
	name.emplace_back("insertion sort");
	name.emplace_back("reduced string");
	name.emplace_back("insertionsort2");
	name.emplace_back("weighted uniform string");
	name.emplace_back("mars exploration");
	name.emplace_back("palindrome index");
	name.emplace_back("quicksort1");
	name.emplace_back("lonely integer");
	name.emplace_back("alternating characers");
	name.emplace_back("countingsort1");
	name.emplace_back("countingsort2");
	name.emplace_back("find the median");
	name.emplace_back("closest numbers");
	name.emplace_back("anagram");
	name.emplace_back("icecream patrol");
	name.emplace_back("minimum absolute difference in an array");
	name.emplace_back("missing numbers");
	name.emplace_back("sherlock and array");
	name.emplace_back("runningtime");
	name.emplace_back("sherlock and the beast");
	name.emplace_back("maximum perimeter triangle");
	name.emplace_back("making anagrams");
	name.emplace_back("gem stones");
	name.emplace_back("two strings");
	name.emplace_back("between two sets");
	name.emplace_back("library fine");
	name.emplace_back("acm icpc team");
	name.emplace_back("lisa workbook");
	name.emplace_back("manasa and stones");
	name.emplace_back("grid challenge");
	name.emplace_back("nim game 1");
	name.emplace_back("Luck balance");
	name.emplace_back("Game of thrones");
	name.emplace_back("Beautiful binary string");
#pragma region print
	int max_len = name[0].length();
	for (auto it = name.begin(); it != name.end(); ++it)
	{
		if (max_len< (*it).length())
			max_len = (*it).length();
	}

	cout.width(max_len + std::to_string(name.size()).length());

	cout << "easy\n";
	int cnt(1);
	for (int i = 0; i<name.size(); ++i)
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
		case 54: _54::fest(); break;
		case 55: _55::cavity_map(); break;
		case 56: _56::kape(); break;
		case 57: _57::taum(); break;
		case 58: _58::hallowen(); break;
		case 59: _59::fair(); break;
		case 60: _60::strange(); break;
		case 61: _61::bsort(); break;
		case 62: _62::flatland(); break;
		case 63: _63::happy(); break;
		case 64: _64::inserionsort(); break;
		case 65: _65::reduced(); break;
		case 66: _66::insertionsort2(); break;
		case 67: _67::weighted(); break;
		case 68: _68::mars(); break;
		case 69: _69::palindrome(); break;
		case 70: _70::qsort(); break;
		case 71: _71::lonely(); break;
		case 72: _72::character(); break;
		case 73: _73::counting(); break;
		case 74: _74::counting_sort(); break;
		case 75: _75::find_median(); break;
		case 76: _76::closest(); break;
		case 77: _77::ana(); break;
		case 78: _78::patrol(); break;
		case 79: _79::minimum(); break;
		case 80: _80::miss(); break;
		case 81: _81::sherlock(); break;
		case 82: _82::runtime(); break;
		case 83: _83::sherlock(); break;
		case 84: _84::perimeter(); break;
		case 85: _85::making(); break;
		case 86: _86::gem(); break;
		case 87: _87::two(); break;
		case 88: _88::sets(); break;
		case 89: _89::library(); break;
		case 90: _90::acm(); break;
		case 91: _91::lisa(); break;
		case 92: _92::manasa(); break;
		case 93: _93::grid_ch(); break;
		case 94: _94::nim(); break;
		case 95: _95::luck_balance(); break;
		case 96: _96::game_of_thrones(); break;
		case 97: _97::beautiful_binary_string(); break;
#pragma endregion 
			
		case 0: break;
		}
	} while (n > 0);
	return 0;
}