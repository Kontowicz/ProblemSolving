#pragma once
#include "countingsort1_easy.h"

namespace _74
{
	std::vector<int> countingSort(std::vector<int> arr) 
	{
		std::vector<int> tmp(100, 0);

		for (auto num : arr)
		{
			++tmp[num];
		}
		std::vector<int> to_return;
		for (int j = 0; j < 100; ++j)
		{
			for (int i = 0; i < tmp[j]; ++i) {
				to_return.push_back(j);
			}
		}

		return to_return;
	}

	void counting_sort()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		std::vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = std::stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		std::vector<int> result = countingSort(arr);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}

		std::cout << "\n";
	}
}
