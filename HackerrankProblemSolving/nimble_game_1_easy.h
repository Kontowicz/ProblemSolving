#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace _111
{
	std::string nimbleGame(std::vector<int> s) {
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
			if (s[i] % 2 == 1)
			{
				cnt ^= i;
			}

		if (cnt == 0)
			return "Second";
		return "First";
	}

	void nimble_game_1()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::string s_temp_temp;
			getline(std::cin, s_temp_temp);

			std::vector<std::string> s_temp = split_string(s_temp_temp);

			std::vector<int> s(n);

			for (int i = 0; i < n; i++) {
				int s_item = std::stoi(s_temp[i]);

				s[i] = s_item;
			}

			std::string result = nimbleGame(s);

			std::cout << result << "\n";
		}
	}
}
