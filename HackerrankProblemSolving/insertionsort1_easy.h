#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>
#include <iterator>

namespace _64
{
	void insertionSort1(int n, std::vector<int> arr)
	{
		int tmp = arr[arr.size() - 1];
		arr[arr.size() - 1] = arr[arr.size() - 2];
		for (int i = arr.size() - 1; i >= 0; --i)
		{
			if (arr[i]>tmp && arr[i - 1]>tmp)
			{
				arr[i] = arr[i - 1];
			}
			else
			{
				arr[i] = tmp;
				break;
			}
			std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<int>(std::cout, " ")); std::cout << "\n";
		}

		std::copy(arr.cbegin(), arr.cend(), std::ostream_iterator<int>(std::cout, " ")); std::cout << "\n";
	}

	void inserionsort()
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

		insertionSort1(n, arr);

	}
}
