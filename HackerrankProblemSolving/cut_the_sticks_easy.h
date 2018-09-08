#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace  _42
{
	std::vector<int> cutTheSticks(std::vector<int> arr) {
		std::vector<int> to_return;

		while (arr.size() != 0)
		{
			int min = *std::min_element(arr.begin(), arr.end());
			to_return.push_back(arr.size());
			for (int &num : arr)
			{
				num = num - min;
			}
			arr.erase(std::remove(arr.begin(), arr.end(), 0), arr.end());
		}
		return to_return;
	}

	
	void cut()
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

		std::vector<int> result = cutTheSticks(arr);

		for (int i = 0; i < result.size(); i++) {
			std::cout<< result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}
	}
}
