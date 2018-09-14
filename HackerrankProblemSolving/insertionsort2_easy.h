#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>
#include <iterator>

namespace _66
{
	void insertionSort2(int n, std::vector<int> arr) {
		for (auto it = arr.begin() + 1; it != arr.end(); ++it)
		{
			for (auto tmp = it; tmp != arr.begin() && *tmp<*(tmp - 1); --tmp)
			{
				std::iter_swap((tmp - 1), tmp);
			}
			copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
			std::cout << "\n";
		}
	}

	void insertionsort2()
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

		insertionSort2(n, arr);
	}
}
