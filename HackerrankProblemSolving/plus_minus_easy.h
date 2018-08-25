#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iso646.h>
#include <iostream>

namespace sixth
{
	std::vector<std::string> split_string(std::string input_string) {
		std::string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
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
