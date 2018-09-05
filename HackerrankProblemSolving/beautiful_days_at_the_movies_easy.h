#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _38
{
	int reverse(int a)
	{
		int num = a;
		int reverse(0);
		int tmp;
		while (num != 0)
		{
			tmp = num % 10;
			reverse = 10 * reverse + tmp;
			num = num / 10;
		}
		return reverse;
	}

	int beautifulDays(int i, int j, int k) {

		int cnt(0);

		for (int begin = i; begin <= j; ++begin)
		{
			double c = (abs(begin - reverse(begin)));
			double new_number = c / k;
			if (new_number - static_cast<int>(new_number) == 0)
			{
				++cnt;
			}
		}
		return cnt;
	}
	void day()
	{
		std::string ijk_temp;
		getline(std::cin, ijk_temp);

		std::vector<std::string> ijk = split_string(ijk_temp);

		int i = std::stoi(ijk[0]);

		int j = std::stoi(ijk[1]);

		int k = std::stoi(ijk[2]);

		int result = beautifulDays(i, j, k);

		std::cout << result << "\n";

	}
}
