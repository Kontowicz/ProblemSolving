#pragma once
#include "string_split.h"
#include <iostream>

namespace _4 
{
	long aVeryBigSum(std::vector<long> ar) {
		long sum(0);
		for (auto e : ar)
			sum += e;
		return sum;
	}

	void very_big_sum() {
		int ar_count;
		std::cin >> ar_count;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::string ar_temp_temp;
		getline(std::cin, ar_temp_temp);
		std::vector<std::string> ar_temp = split_string(ar_temp_temp);
		std::vector<long> ar(ar_count);
		for (int i = 0; i < ar_count; i++) {
			long ar_item = stol(ar_temp[i]);

			ar[i] = ar_item;
		}
		long result = aVeryBigSum(ar);
		std::cout << result << "\n";
	}
}
