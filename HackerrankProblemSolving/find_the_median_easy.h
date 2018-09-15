#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "string_split.h"

namespace _75
{
	int findMedian(std::vector<int> arr)
	{
		std::sort(arr.begin(), arr.end());
		if (arr.size() % 2 == 1) {
			return arr[arr.size() / 2];
		}
		return (arr[arr.size() / 2] + arr[(arr.size() / 2) + 1]) / 2;
	}


	void find_median()
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

		int result = findMedian(arr);

		std::cout << result << "\n";
	}
}
