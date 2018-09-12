#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _62
{
	int flatlandSpaceStations(int n, std::vector<int> c) {
		if (n == c.size())
			return 0;

		std::vector<int> distance;
		int dis(1);

		int min = *std::min_element(c.begin(), c.end());
		int max = *std::max_element(c.begin(), c.end());

		distance.push_back(min);
		distance.push_back(n - max - 1);

		for (int i = 0; i<n; i++)
		{
			if (std::find(c.begin(), c.end(), i) != c.end())
			{
				distance.push_back(dis / 2);
				dis = 1;
				continue;
			}
			else
			{
				++dis;
			}
		}
		return *std::max_element(distance.begin(), distance.end());
	}

	void flatland()
	{
		std::string nm_temp;
		getline(std::cin, nm_temp);

		std::vector<std::string> nm = split_string(nm_temp);

		int n = std::stoi(nm[0]);

		int m = std::stoi(nm[1]);

		std::string c_temp_temp;
		getline(std::cin, c_temp_temp);

		std::vector<std::string> c_temp = split_string(c_temp_temp);

		std::vector<int> c(m);

		for (int i = 0; i < m; i++) {
			int c_item = std::stoi(c_temp[i]);

			c[i] = c_item;
		}

		int result = flatlandSpaceStations(n, c);

		std::cout << result << "\n";

	}
}
