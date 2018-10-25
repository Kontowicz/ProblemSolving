#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _110
{
	int towerBreakers(int n, int m) {
		return m == 1 || n % 2 == 0 ? 2 : 1;
	}

	void tower_breakers_1()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string nm_temp;
			getline(std::cin, nm_temp);

			std::vector<std::string> nm = split_string(nm_temp);

			int n = std::stoi(nm[0]);

			int m = std::stoi(nm[1]);

			int result = towerBreakers(n, m);

			std::cout << result << "\n";
		}
	}
}
