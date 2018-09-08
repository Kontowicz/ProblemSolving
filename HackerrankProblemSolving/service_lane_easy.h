#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "string_split.h"

namespace _43
{
	std::vector<int> serviceLane(std::vector<int> n, std::vector<std::vector<int>> cases) {
		std::vector<int> to_return;
		for (auto element : cases)
		{
			to_return.push_back(*std::min_element(n.begin() + element[0], n.begin() + element[1] + 1));
		}

		return to_return;
	}

	void service()
	{
		std::string nt_temp;
		getline(std::cin, nt_temp);

		std::vector<std::string> nt = split_string(nt_temp);

		int n = std::stoi(nt[0]);

		int t = std::stoi(nt[1]);

		std::string width_temp_temp;
		getline(std::cin, width_temp_temp);

		std::vector<std::string> width_temp = split_string(width_temp_temp);

		std::vector<int> width(n);

		for (int i = 0; i < n; i++) {
			int width_item = std::stoi(width_temp[i]);

			width[i] = width_item;
		}

		std::vector<std::vector<int>> cases(t);
		for (int i = 0; i < t; i++) {
			cases[i].resize(2);

			for (int j = 0; j < 2; j++) {
				std::cin >> cases[i][j];
			}

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		std::vector<int> result = serviceLane(width, cases);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}

		std::cout << "\n";
	}
}
