#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace sixteenth
{
	int divisibleSumPairs(int n, int k, std::vector<int> ar) {

		std::vector<int> count;
		count.resize(k);
		int ret(0);
		for (int i = 0; i< k; i++) {
			count[i] = 0;
		}
		for (auto it = ar.begin(); it != ar.end(); ++it) {
			++count[*it%k];
		}
		ret += ((count[0] * (count[0] - 1)) / 2);
		int j = k - 1;
		for (int i = 1; i < j; ++i) {
			ret += (count[i] * count[j]);
			--j;
		}
		for (int i = 1; i<k; i++) {
			if (i * 2 == k) {
				ret += ((count[i] * (count[i] - 1)) / 2);
			}
		}
		return ret;
	}

	void divisible()
	{
		std::string nk_temp;
		getline(std::cin, nk_temp);

		std::vector<std::string> nk = split_string(nk_temp);

		int n = std::stoi(nk[0]);

		int k = std::stoi(nk[1]);

		std::string ar_temp_temp;
		std::getline(std::cin, ar_temp_temp);

		std::vector<std::string> ar_temp = split_string(ar_temp_temp);

		std::vector<int> ar(n);

		for (int i = 0; i < n; i++) {
			int ar_item = std::stoi(ar_temp[i]);

			ar[i] = ar_item;
		}

		int result = divisibleSumPairs(n, k, ar);

		std::cout << result << "\n";
	}
}
