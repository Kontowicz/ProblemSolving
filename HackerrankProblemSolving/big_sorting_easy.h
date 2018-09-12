#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

namespace _61
{
	std::vector<std::string> bigSorting(std::vector<std::string> unsorted) {
		std::sort(unsorted.begin(), unsorted.end(), [](const std::string& a, const std::string &b) {
			if (a.length() == b.length())
			{
				return a<b;
			}
			return a.length() < b.length();
		});
		return unsorted;
	}
	
	void bsort()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::vector<std::string> unsorted(n);

		for (int i = 0; i < n; i++) {
			std::string unsorted_item;
			getline(std::cin, unsorted_item);

			unsorted[i] = unsorted_item;
		}

		std::vector<std::string> result = bigSorting(unsorted);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}

		std::cout << "\n";

	}
}
