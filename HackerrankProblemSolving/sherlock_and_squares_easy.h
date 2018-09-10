#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _52
{
	int squares(int a, int b) {
		if ((float)sqrt(a) == (int)sqrt(a)) {
			return sqrt(b) - sqrt(a) + 1;
		}
		return sqrt(b) - (int)sqrt(a);
	}


	void sherlock()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string ab_temp;
			getline(std::cin, ab_temp);

			std::vector<std::string> ab = split_string(ab_temp);

			int a = std::stoi(ab[0]);

			int b = std::stoi(ab[1]);

			int result = squares(a, b);

			std::cout << result << "\n";
		}

	}
}
