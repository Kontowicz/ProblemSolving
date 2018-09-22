#pragma once
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _82
{
	int runningTime(std::vector<int> arr) {
		int cnt(0);
		for (auto it = arr.begin() + 1; it != arr.end(); ++it)
		{
			for (auto tmp = it; tmp != arr.begin() && *tmp<*(tmp - 1); --tmp)
			{
				std::iter_swap((tmp - 1), tmp); ++cnt;
			}

		}
		return cnt;
	}

	
	void runtime()
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

		int result = runningTime(arr);

		std::cout << result << "\n";
	}
}
