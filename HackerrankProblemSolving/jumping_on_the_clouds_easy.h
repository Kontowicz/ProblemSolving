#pragma once
#include <vector>
#include "string_split.h"
#include <iostream>


namespace  _46
{
	int jumpingOnClouds(std::vector<int> c) {

		int cnt(0);

		for (int i = 0; i<c.size() - 1; ++cnt)
		{
			if (c[i + 2] == 0)
				++i;
			++i;
		}

		return cnt;
	}

	void jumping()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string c_temp_temp;
		getline(std::cin, c_temp_temp);

		std::vector<std::string> c_temp = split_string(c_temp_temp);

		std::vector<int> c(n);

		for (int i = 0; i < n; i++) {
			int c_item = stoi(c_temp[i]);

			c[i] = c_item;
		}

		int result = jumpingOnClouds(c);

		std::cout << result << "\n";
	}
}
