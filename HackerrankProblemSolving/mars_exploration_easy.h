#pragma once
#include <iostream>
#include <string>

namespace _68
{
	int marsExploration(std::string s)
	{
		std::string patters = "SOS";
		int diff = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (patters[i % 3] != s[i])
			{
				++diff;
			}
		}
		return diff;
	}

	void mars()
	{
		std::string s;
		getline(std::cin, s);

		int result = marsExploration(s);

		std::cout << result << "\n";

	}
}
