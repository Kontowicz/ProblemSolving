#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace  _58
{
	int howManyGames(int start, int step, int min, int money) {
		int to_return;
		int tmp;
		
		if (money < start) {
			to_return = 0;
		}
		else {
			to_return = 1 + (start - min) / step;
			tmp = to_return * (2 * start - (to_return - 1) * step) / 2;
			if (money >= tmp) {
				to_return += (money - tmp) / min;
			}
			else {
				int b = 2 * start + step;
				to_return = (b - sqrt(b * b - 8 * step * money)) / (2 * step);
			}
		}
		return to_return;
	}

	void hallowen()
	{
		std::string pdms_temp;
		getline(std::cin, pdms_temp);

		std::vector<std::string> pdms = split_string(pdms_temp);

		int p = std::stoi(pdms[0]);

		int d = std::stoi(pdms[1]);

		int m = std::stoi(pdms[2]);

		int s = std::stoi(pdms[3]);

		int answer = howManyGames(p, d, m, s);

		std::cout << answer << "\n";

	}
}
