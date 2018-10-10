#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include "string_split.h"

namespace  _95
{
	int luckBalance(int k, std::vector<std::vector<int>> contests) {
		int sum = 0;
		int min = 0;
		std::sort(contests.begin(), contests.end());
		std::vector<std::vector<int>> win;
		std::vector<std::vector<int>> lose;

		for (int i = 0; i < contests.size(); ++i)
		{
			sum += contests[i][0];
			if (contests[i][1] == 1)
				win.push_back(contests[i]);
			else
				lose.push_back(contests[i]);
		}

		std::sort(win.begin(), win.end());
		std::reverse(win.begin(), win.end());

		for (int i = 0; i < win.size(); i++)
		{
			if (k != 0)
				--k;
			else
				min += win[i][0];
		}
		return sum - 2 * min;
	}

	void luck_balance()
	{
		std::string nk_temp;
		getline(std::cin, nk_temp);

		std::vector<std::string> nk = split_string(nk_temp);

		int n = std::stoi(nk[0]);

		int k = std::stoi(nk[1]);

		std::vector<std::vector<int>> contests(n);
		for (int i = 0; i < n; i++) {
			contests[i].resize(2);

			for (int j = 0; j < 2; j++) {
				std::cin >> contests[i][j];
			}

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		int result = luckBalance(k, contests);

		std::cout << result << "\n";
	}
}
