#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>


namespace _14
{
	std::vector<int> breakingRecords(std::vector<int> scores) {
		int min(scores[0]);
		int max(scores[0]);

		int min_count(0);
		int max_count(0);

		for (int e : scores) {
			if (e>max) {
				max = e;
				++max_count;
			}
			else if (e<min) {
				min = e;
				++min_count;
			}
		}
		std::vector<int> tmp;
		tmp.push_back(max_count);
		tmp.push_back(min_count);
		return tmp;
	}

	void breaking()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string scores_temp_temp;
		getline(std::cin, scores_temp_temp);

		std::vector<std::string> scores_temp = split_string(scores_temp_temp);

		std::vector<int> scores(n);

		for (int i = 0; i < n; i++) {
			int scores_item = std::stoi(scores_temp[i]);

			scores[i] = scores_item;
		}

		std::vector<int> result = breakingRecords(scores);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}
