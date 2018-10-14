#pragma once
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include "string_split.h"
#include "hackerrank_in_a_string_easy.h"

namespace _98
{
	long marcsCakewalk(std::vector<int> calorie) {
		long mile = 0;
		int cnt = 0;
		std::sort(calorie.begin(), calorie.end());
		std::reverse(calorie.begin(), calorie.end());
		for (auto it = calorie.begin(); it != calorie.end(); ++it)
		{
			mile += ((pow(2, cnt++)) * (*it));
		}
		return mile;
	}

	void marcs_cakewalk()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string calorie_temp_temp;
		getline(std::cin, calorie_temp_temp);

		std::vector<std::string> calorie_temp = split_string(calorie_temp_temp);

		std::vector<int> calorie(n);

		for (int i = 0; i < n; i++) {
			int calorie_item = std::stoi(calorie_temp[i]);

			calorie[i] = calorie_item;
		}

		long result = marcsCakewalk(calorie);

		std::cout << result << "\n";
	}
}
