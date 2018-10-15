#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include "string_split.h"

namespace  _99
{
	int maximumToys(std::vector<int> prices, int k) {
		std::sort(prices.begin(), prices.end());
		int cnt = 0;

		for (int i = 0; i < prices.size(); i++)
		{
			k -= prices[i];
			if (k > 0)
				++cnt;
			else 
				break;
		}
		return cnt;
	}

	void mark_and_toys()
	{
		std::string nk_temp;
		getline(std::cin, nk_temp);

		std::vector<std::string> nk = split_string(nk_temp);

		int n = std::stoi(nk[0]);

		int k = std::stoi(nk[1]);

		std::string prices_temp_temp;
		getline(std::cin, prices_temp_temp);

		std::vector<std::string> prices_temp = split_string(prices_temp_temp);

		std::vector<int> prices(n);

		for (int i = 0; i < n; i++) {
			int prices_item = stoi(prices_temp[i]);

			prices[i] = prices_item;
		}

		int result = maximumToys(prices, k);

		std::cout << result << "\n";
	}

}
