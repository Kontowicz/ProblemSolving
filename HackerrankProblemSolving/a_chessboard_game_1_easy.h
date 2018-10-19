#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "string_split.h"

namespace _104
{
	std::string chessboardGame(int x, int y) {
		x = x % 4;
		y = y % 4;
		if (y == 0 || y == 3 || x == 0 || x == 3) {
			return "First";
		}
		return "Second";
	}
	void a_chessboard_game()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string xy_temp;
			getline(std::cin, xy_temp);

			std::vector<std::string> xy = split_string(xy_temp);

			int x = stoi(xy[0]);

			int y = stoi(xy[1]);

			std::string result = chessboardGame(x, y);

			std:: cout<< result << "\n";
		}

	}
}
