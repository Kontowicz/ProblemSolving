#pragma once
#include <algorithm>
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>
#include "hackerrank_in_a_string_easy.h"

namespace _112
{
	std::vector<int> largestPermutation(int k, std::vector<int> arr) {
		for (auto it = arr.begin(); it != arr.end() && k > 0; ++it)
		{
			auto tmp = std::max_element(it, arr.end());
			if (tmp != it && *tmp != *it)
			{
				std::iter_swap(it, tmp);
				--k;
			}
		}

		return arr;
	}

	void largest_permutation()
	{
		std::string nk_temp;
		std::getline(std::cin, nk_temp);

		std::vector<std::string> nk = split_string(nk_temp);

		int n = std::stoi(nk[0]);

		int k = std::stoi(nk[1]);

		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		std::vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = std::stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		std::vector<int> result = largestPermutation(k, arr);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}

		std::cout << "\n";
	}
}
