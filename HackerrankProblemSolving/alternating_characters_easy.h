#pragma once
#include <iostream>
#include <string>

namespace _72
{
	int alternatingCharacters(std::string s) 
	{
		int cnt = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == s[i + 1])
				++cnt;
		}
		return cnt;
	}

	void character()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s;
			getline(std::cin, s);

			int result = alternatingCharacters(s);

			std::cout << result << "\n";
		}

	}
}
