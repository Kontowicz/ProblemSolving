#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace _48
{
	int saveThePrisoner(int n, int m, int s) {
		return ((m + s - 2) % n) + 1;
	}


	void save()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string nms_temp;
			std::getline(std::cin, nms_temp);

			std::vector<std::string> nms = split_string(nms_temp);

			int n = std::stoi(nms[0]);

			int m = std::stoi(nms[1]);

			int s = std::stoi(nms[2]);

			int result = saveThePrisoner(n, m, s);

			std::cout << result << "\n";
		}
	}
}
