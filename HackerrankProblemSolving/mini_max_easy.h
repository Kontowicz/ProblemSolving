#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iso646.h>

namespace eight
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


	std::vector<std::string> split_string(std::string input_string) {
		std::string::iterator new_end = std::unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
			return x == y and x == ' ';
		});

		input_string.erase(new_end, input_string.end());

		while (input_string[input_string.length() - 1] == ' ') {
			input_string.pop_back();
		}

		std::vector<std::string> splits;
		char delimiter = ' ';

		size_t i = 0;
		size_t pos = input_string.find(delimiter);

		while (pos != std::string::npos) {
			splits.push_back(input_string.substr(i, pos - i));

			i = pos + 1;
			pos = input_string.find(delimiter, i);
		}

		splits.push_back(input_string.substr(i, std::min(pos, input_string.length()) - i + 1));

		return splits;
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
