#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "string_split.h"

namespace _8
{
	void miniMaxSum(std::vector<int> arr) {
		long long min = arr[0];
		long long max = arr[0];
		long long sum(0);
		for (auto e : arr) {
			sum += e;
			if (e<min) {
				min = e;
			}
			else if (e>max) {
				max = e;
			}
		}
		std::cout << sum - max << " " << sum - min;
	}

	void mini_max()
	{
		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		std::vector<int> arr(5);

		for (int i = 0; i < 5; i++) {
			int arr_item = std::stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		miniMaxSum(arr);
	}
}
