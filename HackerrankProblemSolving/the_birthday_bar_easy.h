#pragma once
#include <string>
#include "string_split.h"
#include <iostream>
#include <numeric>

namespace fifteenth
{
	int birthday(std::vector<int> s, int d, int m) {
		int counter(0);
		for (auto it = s.begin(); it != s.end(); it++) {
			if (d == std::accumulate(it, it + m, 0)) {
				++counter;
			}
		}
		return counter;
	}

	void bar()
	{
		std::string n_temp;
		getline(std::cin, n_temp);

		int n = stoi(ltrim(rtrim(n_temp)));

		std::string s_temp_temp;
		getline(std::cin, s_temp_temp);

		std::vector<std::string> s_temp = split(rtrim(s_temp_temp));

		std::vector<int> s(n);

		for (int i = 0; i < n; i++) {
			int s_item = std::stoi(s_temp[i]);

			s[i] = s_item;
		}

		std::string dm_temp;
		std::getline(std::cin, dm_temp);

		std::vector<std::string> dm = split(rtrim(dm_temp));

		int d = std::stoi(dm[0]);

		int m = std::stoi(dm[1]);

		int result = birthday(s, d, m);

		std::cout << result << "\n";
	}
}
