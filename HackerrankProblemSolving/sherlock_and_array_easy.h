#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>
#include <numeric>

namespace _81
{
	std::string balancedSums(std::vector<int> arr)
	{
		long all = std::accumulate(arr.begin(), arr.end(), 0);
		if (arr.size() == 1 || all == 0 || all - arr[0] == 0) return "YES";

		long left = 0;

		for (int i = 1; i <= arr.size(); ++i)
		{
			left += arr[i - 1];
			if (left == all - arr[i] - left)
			{
				return "YES";
			}
		}
		return "NO";
	}

	void sherlock()
	{
		std::string T_temp;
		getline(std::cin, T_temp);

		int T = stoi(ltrim(rtrim(T_temp)));

		for (int T_itr = 0; T_itr < T; T_itr++) {
			std::string n_temp;
			getline(std::cin, n_temp);

			int n = stoi(ltrim(rtrim(n_temp)));

			std::string arr_temp_temp;
			getline(std::cin, arr_temp_temp);

			std::vector<std::string> arr_temp = split(rtrim(arr_temp_temp));

			std::vector<int> arr(n);

			for (int i = 0; i < n; i++) {
				int arr_item = std::stoi(arr_temp[i]);

				arr[i] = arr_item;
			}

			std::string result = balancedSums(arr);

			std::cout << result << "\n";
		}
	}
}
