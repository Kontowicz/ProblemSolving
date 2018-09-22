#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace _84
{
	std::vector<int> maximumPerimeterTriangle(std::vector<int> sticks) 
	{
		std::sort(sticks.rbegin(), sticks.rend());
		for (int i = 0; i<sticks.size() - 2; i++)
		{
			if (sticks[i]<(sticks[i + 1] + sticks[i + 2]))
			{
				return { sticks[i + 2], sticks[i + 1], sticks[i] };
			}
		}
		return { -1 };
	}

	void perimeter()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string sticks_temp_temp;
		getline(std::cin, sticks_temp_temp);

		std::vector<std::string> sticks_temp = split_string(sticks_temp_temp);

		std::vector<int> sticks(n);

		for (int i = 0; i < n; i++) {
			int sticks_item = std::stoi(sticks_temp[i]);

			sticks[i] = sticks_item;
		}

		std::vector<int> result = maximumPerimeterTriangle(sticks);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}

		std::cout << "\n";
	}
}
