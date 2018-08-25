#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include "string_split.h"

namespace ninth
{
	int birthdayCakeCandles(std::vector<int> ar) {
		int cnt(0);
		int max = ar[0];

		for (auto e : ar) {
			if (max<e)
				max = e;
		}

		for (auto e : ar) {
			if (e == max)
				++cnt;
		}
		return cnt;
	}

	void cake()
	{
		int ar_count;
		std::cin >> ar_count;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string ar_temp_temp;
		getline(std::cin, ar_temp_temp);

		std::vector<std::string> ar_temp = split_string(ar_temp_temp);

		std::vector<int> ar(ar_count);

		for (int i = 0; i < ar_count; i++) {
			int ar_item = std::stoi(ar_temp[i]);

			ar[i] = ar_item;
		}

		int result = birthdayCakeCandles(ar);

		std::cout << result << "\n";
	}
}
