#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>
#include <map>

namespace _20
{
	int sockMerchant(int n, std::vector<int> ar) {
		std::map<int, int> socks;
		for (int num : ar) {
			if (socks.find(num) == socks.end()) {
				socks[num] = 1;
			}
			else {
				++socks[num];
			}
		}
		int pairs(0);
		for (auto e : socks) {
			pairs += e.second / 2;
		}
		return pairs;

	}


	void sock()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string ar_temp_temp;
		getline(std::cin, ar_temp_temp);

		std::vector<std::string> ar_temp = split_string(ar_temp_temp);

		std::vector<int> ar(n);

		for (int i = 0; i < n; i++) {
			int ar_item = std::stoi(ar_temp[i]);

			ar[i] = ar_item;
		}

		int result = sockMerchant(n, ar);

		std::cout << result << "\n";

	}
}
