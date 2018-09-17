#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _79
{
	int minimumAbsoluteDifference(std::vector<int> arr)
	{
		int min = INT_MAX;
		std::sort(arr.begin(), arr.end());
		for (int i = 0; i < arr.size(); ++i)
		{
			if (min > abs(arr[i] - arr[i + 1]))
			{
				min = abs(arr[i] - arr[i + 1]);
			}
		}
		return min;
	}

	void minimum()
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

		int result = minimumAbsoluteDifference(arr);

		std::cout << result << "\n";
	}
}
