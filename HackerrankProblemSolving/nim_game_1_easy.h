#pragma once
#include <string>
#include <iostream>
#include "string_split.h"
#include <vector>

namespace _94
{
	std::string nimGame(std::vector<int> pile)
	{
		int res = 0;

		for (int i = 0; i < pile.size(); i++)
		{
			res = res ^ pile[i];
		}
		if (res == 0)
		{
			return "Second";
		}
		else
		{
			return "First";
		}

	}
	
	void nim()
	{
		int g;
		std::cin >> g;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int g_itr = 0; g_itr < g; g_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::string pile_temp_temp;
			getline(std::cin, pile_temp_temp);

			std::vector<std::string> pile_temp = split_string(pile_temp_temp);

			std::vector<int> pile(n);

			for (int i = 0; i < n; i++) {
				int pile_item = std::stoi(pile_temp[i]);

				pile[i] = pile_item;
			}

			std::string result = nimGame(pile);

			std::cout << result << "\n";
		}
	}
}
