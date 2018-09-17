#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace _78
{
	std::vector<int> icecreamParlor(int m, std::vector<int> arr) 
	{
		std::vector<int> to_return;
		for (int i = 0; i < arr.size(); i++)
		{
			for (int j = 0; j < arr.size(); ++j)
			{
				if (i<j && arr[i] + arr[j] == m)
				{
					to_return.push_back(i + 1);
					to_return.push_back(j + 1);
				}
			}
		}
		return to_return;
	}


	void patrol()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			int m;
			std::cin >> m;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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

			std::vector<int> result = icecreamParlor(m, arr);

			for (int i = 0; i < result.size(); i++) {
				std::cout << result[i];

				if (i != result.size() - 1) {
					std::cout << " ";
				}
			}

			std::cout << "\n";
		}

	}
}
