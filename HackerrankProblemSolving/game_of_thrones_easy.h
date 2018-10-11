#pragma once
#include <map>
#include <iostream>
#include <string>

namespace _96
{
	std::string gameOfThrones(std::string s) {
		std::map<char, int> characters;
		for (auto character : s)
			++characters[character];

		if (s.length() == 1)
			return "YES";

		if (s.length() % 2 == 0)
		{
			for (auto& character : characters)
				if (character.second % 2 == 1)
					return "NO";

			return "YES";
		}
		int cnt = 0;
		for (auto it = characters.begin(); it != characters.end(); ++it)
			if (it->second % 2 == 1)
				++cnt;

		return cnt == 1 ? "YES" : "NO";
	}

	void game_of_thrones()
	{
		std::string s;
		getline(std::cin, s);

		std::string result = gameOfThrones(s);

		std::cout << result << "\n";
	}
}
