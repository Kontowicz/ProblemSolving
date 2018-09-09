#pragma once
#include <iostream>
#include <string>

namespace _47
{
	std::string hackerrankInString(std::string s) {
		std::string pattern = "hackerrank";
		auto pos = s.begin();
		for (auto ch : pattern)
		{
			pos = std::find(pos, s.end(), ch);
			if (pos != s.end())
			{
				s.erase(pos);
			}
			else {
				return "NO";
			}
		}
		return "YES";
	}
	
	void string()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s;
			getline(std::cin, s);

			std::string result = hackerrankInString(s);

			std::cout << result << "\n";
		}
	}
}
