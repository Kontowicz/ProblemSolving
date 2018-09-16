#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "string_split.h"

namespace _76
{
	std::vector<int> closestNumbers(std::vector<int> arr) 
	{
		std::sort(arr.begin(), arr.end());

		int diff = INT_MAX;
		for (int i = 0; i < arr.size() - 1; ++i)
		{
			diff = diff>abs(arr[i] - arr[i + 1]) ? abs(arr[i] - arr[i + 1]) : diff;
		}
		std::vector<int> to_return;
		for (int i = 0; i < arr.size() - 1; ++i)
		{
			if (abs(arr[i] - arr[i + 1]) == diff)
			{
				to_return.push_back(arr[i]);
				to_return.push_back(arr[i + 1]);
			}
		}
		return to_return;
	}
	
	void closest()
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

		std::vector<int> result = closestNumbers(arr);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}

		std::cout << "\n";
	}
}
