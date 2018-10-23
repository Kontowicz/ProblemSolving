#pragma once
#include <string>
#include <iostream>

namespace  _108
{
	std::string gameOfStones(int n) {
		if (n % 7 > 1)
			return "First";
		return "Second";
	}

	void game_of_stones()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::string result = gameOfStones(n);

			std::cout << result << "\n";
		}
	}
}
