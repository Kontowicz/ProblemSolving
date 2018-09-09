#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "string_split.h"
#include <map>


namespace  _49
{
	std::vector<int> permutationEquation(std::vector<int> p) {
		std::map<int, int> number;
		int i = 1;
		for (auto e : p)
		{
			number[e] = i++;
		}
		std::vector<int> to_return;
		for (int i = 1; i <= p.size(); i++)
		{
			to_return.push_back(number[number[i]]);
		}
		return to_return;
	}

	void permutation()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string p_temp_temp;
		getline(std::cin, p_temp_temp);

		std::vector<std::string> p_temp = split_string(p_temp_temp);

		std::vector<int> p(n);

		for (int i = 0; i < n; i++) {
			int p_item = std::stoi(p_temp[i]);

			p[i] = p_item;
		}

		std::vector<int> result = permutationEquation(p);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}

		std::cout << "\n";

	}
}
