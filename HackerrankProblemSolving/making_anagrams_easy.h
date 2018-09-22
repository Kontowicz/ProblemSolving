#pragma once
#include <iostream>
#include <string>
namespace _85
{
	int makingAnagrams(std::string s1, std::string s2) 
	{
		int occurence[26] = { 0 };

		for (char ch : s1)
			++occurence[static_cast<short>(ch) - 'a'];

		for (char ch : s2)
			--occurence[static_cast<short>(ch) - 'a'];

		int to_return = 0;

		for (int occ : occurence)
			to_return += abs(occ);

		return to_return;
	}

	void making()
	{
		std::string s1;
		getline(std::cin, s1);

		std::string s2;
		getline(std::cin, s2);

		int result = makingAnagrams(s1, s2);

		std::cout << result << "\n";
	}
}
