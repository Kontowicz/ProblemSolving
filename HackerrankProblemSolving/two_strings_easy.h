#pragma once
#include <string>
#include <iostream>

namespace _87
{
	std::string twoStrings(std::string s1, std::string s2)
	{
		for (auto it = s1.begin(); it != s1.end(); ++it)
		{
			if (s2.find(*it)<s1.size())
			{
				return "YES";
			}
		}
		return "NO";
	}

	void two()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s1;
			getline(std::cin, s1);

			std::string s2;
			getline(std::cin, s2);

			std::string result = twoStrings(s1, s2);

			std::cout << result << "\n";
		}
	}
}
