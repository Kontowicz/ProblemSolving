#pragma once
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>

namespace third
{
	std::vector<int> compareTriplets(const std::vector<int> &a, const std::vector<int> &b) {
		std::vector<int> to_return{ 0,0 };
		to_return.resize(2);
		for (int i(0); i< a.size(); i++) {
			if (a[i]>b[i])
				++to_return[0];
			else if (a[i]<b[i])
				++to_return[1];
			else if (a[i] == b[i])
				continue;
		}
		return to_return;

	}

	void compare_the_triplets()
	{
		std::string a_temp_temp;
		getline(std::cin, a_temp_temp);

		std::vector<std::string> a_temp = split(rtrim(a_temp_temp));

		std::vector<int> a(3);

		for (int i = 0; i < 3; i++) {
			int a_item = stoi(a_temp[i]);

			a[i] = a_item;
		}

		std::string b_temp_temp;
		getline(std::cin, b_temp_temp);

		std::vector<std::string> b_temp = split(rtrim(b_temp_temp));

		std::vector<int> b(3);

		for (int i = 0; i < 3; i++) {
			int b_item = stoi(b_temp[i]);

			b[i] = b_item;
		}

		std::vector<int> result = compareTriplets(a, b);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}
