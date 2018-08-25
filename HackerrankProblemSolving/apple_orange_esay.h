#pragma once
#include <algorithm>
#include <string>
#include <vector>
#include <iso646.h>
#include <iostream>

namespace twelfth
{
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
	void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std::vector<int> oranges) {
		for (int &e : apples) {
			e += a;
		}

		for (int &e : oranges) {
			e += b;
		}

		int apple(0);
		int orange(0);
		for (int &e : apples) {
			if (e >= s && e <= t) {
				++apple;
			}
		}

		for (int &e : oranges) {
			if (e >= s && e <= t) {
				++orange;
			}
		}
		std::cout << apple << "\n";
		std::cout << orange;
	}


	void apple_orange()
	{
		std::string st_temp;
		std::getline(std::cin, st_temp);

		std::vector<std::string> st = split_string(st_temp);

		int s = std::stoi(st[0]);

		int t = std::stoi(st[1]);

		std::string ab_temp;
		getline(std::cin, ab_temp);

		std::vector<std::string> ab = split_string(ab_temp);

		int a = std::stoi(ab[0]);

		int b = std::stoi(ab[1]);

		std::string mn_temp;
		getline(std::cin, mn_temp);

		std::vector<std::string> mn = split_string(mn_temp);

		int m = std::stoi(mn[0]);

		int n = std::stoi(mn[1]);

		std::string apples_temp_temp;
		getline(std::cin, apples_temp_temp);

		std::vector<std::string> apples_temp = split_string(apples_temp_temp);

		std::vector<int> apples(m);

		for (int i = 0; i < m; i++) {
			int apples_item = std::stoi(apples_temp[i]);

			apples[i] = apples_item;
		}

		std::string oranges_temp_temp;
		getline(std::cin, oranges_temp_temp);

		std::vector<std::string> oranges_temp = split_string(oranges_temp_temp);

		std::vector<int> oranges(n);

		for (int i = 0; i < n; i++) {
			int oranges_item = std::stoi(oranges_temp[i]);

			oranges[i] = oranges_item;
		}

		countApplesAndOranges(s, t, a, b, apples, oranges);
	}
}
