#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _23
{
	int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
		int sum(-1);
		for (auto e : keyboards) {
			for (auto i : drives) {
				if (e + i>sum && e + i <= b)
					sum = e + i;
			}
		}
		return sum;
	}

	void shop()
	{
		std::string bnm_temp;
		getline(std::cin, bnm_temp);

		std::vector<std::string> bnm = split_string(bnm_temp);

		int b = std::stoi(bnm[0]);

		int n = std::stoi(bnm[1]);

		int m = std::stoi(bnm[2]);

		std::string keyboards_temp_temp;
		getline(std::cin, keyboards_temp_temp);

		std::vector<std::string> keyboards_temp = split_string(keyboards_temp_temp);

		std::vector<int> keyboards(n);

		for (int keyboards_itr = 0; keyboards_itr < n; keyboards_itr++) {
			int keyboards_item = std::stoi(keyboards_temp[keyboards_itr]);

			keyboards[keyboards_itr] = keyboards_item;
		}

		std::string drives_temp_temp;
		getline(std::cin, drives_temp_temp);

		std::vector<std::string> drives_temp = split_string(drives_temp_temp);

		std::vector<int> drives(m);

		for (int drives_itr = 0; drives_itr < m; drives_itr++) {
			int drives_item = std::stoi(drives_temp[drives_itr]);

			drives[drives_itr] = drives_item;
		}

		/*
		* The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
		*/

		int moneySpent = getMoneySpent(keyboards, drives, b);

		std::cout<< moneySpent << "\n";
	}
}
