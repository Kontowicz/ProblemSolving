#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _36
{
	int hurdleRace(int k, std::vector<int> height) {
		int max = height[0];
		for (int e : height)
		{
			if (max<e)
				max = e;
		}
		return max - k>0 ? max - k : 0;
	}
	
	void hurdle()
	{
		std::string nk_temp;
		getline(std::cin, nk_temp);

		std::vector<std::string> nk = split_string(nk_temp);

		int n = std::stoi(nk[0]);

		int k = std::stoi(nk[1]);

		std::string height_temp_temp;
		getline(std::cin, height_temp_temp);

		std::vector<std::string> height_temp = split_string(height_temp_temp);

		std::vector<int> height(n);

		for (int i = 0; i < n; i++) {
			int height_item = std::stoi(height_temp[i]);

			height[i] = height_item;
		}

		int result = hurdleRace(k, height);

		std::cout << result << "\n";
	}
}
