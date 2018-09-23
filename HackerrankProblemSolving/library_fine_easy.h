#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _89
{
	int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
	{
		if (y1 == y2)
		{
			if (m1 == m2)
			{
				return d1 <= d2 ? 0 : 15 * (d1 - d2);
			}
			return m1<m2?0: 500 * (m1 - m2);
		}
		return y1 < y2 ? 0 : 10000;
	}

	void library()
	{
		std::string d1M1Y1_temp;
		getline(std::cin, d1M1Y1_temp);

		std::vector<std::string> d1M1Y1 = split_string(d1M1Y1_temp);

		int d1 = std::stoi(d1M1Y1[0]);

		int m1 = std::stoi(d1M1Y1[1]);

		int y1 = std::stoi(d1M1Y1[2]);

		std::string d2M2Y2_temp;
		getline(std::cin, d2M2Y2_temp);

		std::vector<std::string> d2M2Y2 = split_string(d2M2Y2_temp);

		int d2 = std::stoi(d2M2Y2[0]);

		int m2 = std::stoi(d2M2Y2[1]);

		int y2 = std::stoi(d2M2Y2[2]);

		int result = libraryFine(d1, m1, y1, d2, m2, y2);

		std::cout << result << "\n";
	}
}
