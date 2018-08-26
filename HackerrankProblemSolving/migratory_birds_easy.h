#pragma once
#include <string>
#include "string_split.h"
#include <iostream>
#include <map>

namespace seventeenth
{
	int migratoryBirds(std::vector<int> arr) {
		std::map<int, int> counter;
		for (auto e : arr)
		{
			if (counter.find(e) == counter.end())
			{
				counter[e] = 1;
			}
			else
			{
				counter[e] = counter[e] + 1;
			}
		}
		auto it = std::max_element(counter.begin(), counter.end(),
			[](const std::pair<int, int>& p1, const std::pair<int, int>& p2) {
			return p1.second < p2.second; });
		return it->first;
	}

	void birds()
	{
		std::string arr_count_temp;
		getline(std::cin, arr_count_temp);

		int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split(rtrim(arr_temp_temp));

		std::vector<int> arr(arr_count);

		for (int i = 0; i < arr_count; i++) {
			int arr_item = std::stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		int result = migratoryBirds(arr);

		std::cout<< result << "\n";
	}
}
