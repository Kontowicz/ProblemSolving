#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>
#include <map>

namespace _53
{
	int equalizeArray(std::vector<int> arr) 
	{
		std::map<int, int> numbers;
		for (auto num : arr)
		{
			if (numbers.find(num) != numbers.end())
			{
				++numbers[num];
			}
			else
			{
				numbers[num] = 1;
			}
		}

		auto max = std::max_element(numbers.begin(), numbers.end(), [](const std::pair<int, int> &p1, const std::pair<int, int> &p2) {return p1.second<p2.second; });
		return arr.size() - max->second;
	}

	void equality()
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

		int result = equalizeArray(arr);

		std::cout << result << "\n";
	}
}
