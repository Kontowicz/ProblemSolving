#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _24
{
	std::string catAndMouse(int x, int y, int z) {
		if (abs(z - y)>abs(z - x)) {
			return "Cat A";
		}
		else if (abs(z - y)<abs(z - x)) {
			return "Cat B";
		}
		else {
			return "Mouse C";
		}

	}
	void cat()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string xyz_temp;
			std::getline(std::cin, xyz_temp);

			std::vector<std::string> xyz = split_string(xyz_temp);

			int x = std::stoi(xyz[0]);

			int y = std::stoi(xyz[1]);

			int z = std::stoi(xyz[2]);

			std::string result = catAndMouse(x, y, z);
			std::cout << result << "\n";
		}
	}
}
