#pragma once
#include <string>
#include <iostream>

namespace _65
{
	std::string superReducedString(std::string s) {
		int n = s.length() - 1;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == s[i + 1])
			{
				s.erase(i, 2); n = n - 2; i = i - 2;
			}
		}
		return (s.empty()) ? "Empty String" : s;
	}

	void reduced()
	{
		std::string s;
		getline(std::cin, s);

		std::string result = superReducedString(s);

		std::cout << result << "\n";
	}
}
