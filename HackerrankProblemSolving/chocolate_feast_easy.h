#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _54
{
	int chocolateFeast(int n, int c, int m) {
		int to_return = n / c;
		int wrapper = n / c;
		while (wrapper >= m) {
			to_return = to_return + wrapper / m;
			wrapper = wrapper / m + wrapper % m;
		}
		return to_return;
	}

	void fest()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string ncm_temp;
			getline(std::cin, ncm_temp);

			std::vector<std::string> ncm = split_string(ncm_temp);

			int n = std::stoi(ncm[0]);

			int c = std::stoi(ncm[1]);

			int m = std::stoi(ncm[2]);

			int result = chocolateFeast(n, c, m);

			std::cout << result << "\n";
		}
	}
}
