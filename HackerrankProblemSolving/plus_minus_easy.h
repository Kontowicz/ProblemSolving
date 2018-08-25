#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace sixth
{
	void plusMinus(std::vector<int> arr) {
		unsigned int zero(0);
		unsigned int possitive(0);
		unsigned int negative(0);
		for (auto e : arr) {
			if (e>0) {
				++possitive;
			}
			else if (e<0) {
				++negative;
			}
			else if (e == 0) {
				++zero;
			}
		}
		std::cout << (double)((double)possitive / (double)arr.size()) << "\n";
		std::cout << double((double)negative / (double)arr.size()) << "\n";
		std::cout << double((double)zero / (double)arr.size()) << "\n";
	}

	void plus_minus()
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

		plusMinus(arr);
	}
}
