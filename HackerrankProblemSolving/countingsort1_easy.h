#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "string_split.h"

namespace _73
{
	std::vector<int> countingSort(std::vector<int> arr) 
	{
		std::vector<int> to_return(100, 0);

		for (auto num : arr)
		{
			++to_return[num];
		}
		return to_return;
	}


	void counting()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		std::vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = stoi(arr_temp[i]);

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
