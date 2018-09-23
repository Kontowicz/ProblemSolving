#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _91
{
	int workbook(int n, int k, std::vector<int> arr)
	{
		int problems = 0;
		int page = 1;

		for (int i = 0; i < n; ++i) 
		{
			int problem = 1;
			for (int j = 0; j < arr[i]; ++j) 
			{
				if (problem == page)
					++problems;
				if (problem % k == 0
					&& j + 1 < arr[i]) ++page;
				++problem;
			}
			++page;
		}

		return problems;
	}

	void lisa()
	{
		std::string nk_temp;
		getline(std::cin, nk_temp);

		std::vector<std::string> nk = split_string(nk_temp);

		int n = std::stoi(nk[0]);

		int k = std::stoi(nk[1]);

		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		std::vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = std::stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		int result = workbook(n, k, arr);

		std::cout << result << "\n";
	}
}
