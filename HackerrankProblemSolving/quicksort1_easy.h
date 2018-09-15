#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace _70
{
	std::vector<int> quickSort(std::vector<int> arr) 
	{
		std::vector<int> left;
		std::vector<int> right;
		std::vector<int> equal;
		int pivot = arr[0];
		for (auto it = arr.begin(); it != arr.end(); ++it)
		{
			if (*it>pivot)
			{
				right.push_back(*it);
			}
			else if (*it<pivot)
			{
				left.push_back(*it);
			}
			else
			{
				equal.push_back(*it);
			}
		}
		std::vector<int> to_return;
		to_return.insert(to_return.end(), left.begin(), left.end());
		to_return.insert(to_return.end(), equal.begin(), equal.end());
		to_return.insert(to_return.end(), right.begin(), right.end());

		return to_return;
	}

	void qsort()
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

		std::vector<int> result = quickSort(arr);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}

		std::cout << "\n";

	}
}
