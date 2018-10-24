#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "string_split.h"

namespace _109
{
	std::string pokerNim(std::vector<int> c) 
	{
		int ans = 0;
		for (int i : c)
			ans ^= i;

		if (ans != 0)
			return "First";

		return "Second";
	}

	void poker_nim_1()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string nk_temp;
			getline(std::cin, nk_temp);

			std::vector<std::string> nk = split_string(nk_temp);

			int n = std::stoi(nk[0]);

			int k = std::stoi(nk[1]);

			std::string c_temp_temp;
			getline(std::cin, c_temp_temp);

			std::vector<std::string> c_temp = split_string(c_temp_temp);

			std::vector<int> c(n);

			for (int i = 0; i < n; i++) {
				int c_item = std::stoi(c_temp[i]);

				c[i] = c_item;
			}

			const std::string result = pokerNim(c);

			std::cout << result << "\n";
		}
	}
}
