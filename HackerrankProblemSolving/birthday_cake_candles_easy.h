#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iso646.h>

namespace ninth
{
	int birthdayCakeCandles(std::vector<int> ar) {
		int cnt(0);
		int max = ar[0];

		for (auto e : ar) {
			if (max<e)
				max = e;
		}

		for (auto e : ar) {
			if (e == max)
				++cnt;
		}
		return cnt;
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

	void cake()
	{
		int ar_count;
		std::cin >> ar_count;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string ar_temp_temp;
		getline(std::cin, ar_temp_temp);

		std::vector<std::string> ar_temp = split_string(ar_temp_temp);

		std::vector<int> ar(ar_count);

		for (int i = 0; i < ar_count; i++) {
			int ar_item = std::stoi(ar_temp[i]);

			ar[i] = ar_item;
		}

		int result = birthdayCakeCandles(ar);

		std::cout << result << "\n";
	}
}
