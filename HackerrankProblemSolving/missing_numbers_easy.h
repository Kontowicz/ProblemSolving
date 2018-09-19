#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "string_split.h"
#include <map>

namespace _80
{
	std::vector<int> missingNumbers(std::vector<int> arr, std::vector<int> brr)
	{
		std::map<int, int> occ_arr;
		std::map<int, int> occ_brr;
		for (auto e : arr)
		{
			++occ_arr[e];
		}
		for (auto e : brr)
		{
			++occ_brr[e];
		}
		std::vector<int> to_return;

		for (auto it = occ_brr.begin(); it != occ_brr.end(); ++it)
		{
			if (it->second != occ_arr[it->first])
			{
				to_return.push_back(it->first);
			}
		}
		return to_return;
	}


	void miss()
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

		int m;
		std::cin >> m;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string brr_temp_temp;
		std::getline(std::cin, brr_temp_temp);

		std::vector<std::string> brr_temp = split_string(brr_temp_temp);

		std::vector<int> brr(m);

		for (int i = 0; i < m; i++) {
			int brr_item = std::stoi(brr_temp[i]);

			brr[i] = brr_item;
		}

		std::vector<int> result = missingNumbers(arr, brr);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}

		std::cout << "\n";
	}
}
