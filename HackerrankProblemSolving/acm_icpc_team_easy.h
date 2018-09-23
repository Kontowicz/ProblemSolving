#pragma once
#include <vector>
#include <string>
#include "string_split.h"
#include <iostream>

namespace _90
{
	std::vector<int> acmTeam(std::vector<std::string> topic) {
		std::vector<std::string> all_cases;

		for (int i = 0; i < topic.size(); ++i)
		{
			for (int j = 0; j < topic.size(); ++j)
			{
				if (i<j)
				{
					std::string sum = "";
					for (int tmp = 0; tmp < topic[i].length(); ++tmp)
					{
						if (topic[i][tmp] == '1' || topic[j][tmp] == '1')
							sum += '1';
						else
							sum += '0';
					}
					all_cases.push_back(sum);
				}
			}
		}

		std::vector<int> sum;
		sum.reserve(all_cases.size());
		for (auto& all_case : all_cases)
		{
			sum.push_back(std::count(all_case.begin(), all_case.end(), '1'));
		}
		int max = *std::max_element(sum.begin(), sum.end());
		return { max, static_cast<int>(std::count(sum.begin(), sum.end(), max)) };
	}


	void acm() {
		std::string nm_temp;
		getline(std::cin, nm_temp);

		std::vector<std::string> nm = split_string(nm_temp);

		int n = std::stoi(nm[0]);

		int m = std::stoi(nm[1]);

		std::vector<std::string> topic(n);

		for (int i = 0; i < n; i++) {
			std::string topic_item;
			getline(std::cin, topic_item);

			topic[i] = topic_item;
		}

		std::vector<int> result = acmTeam(topic);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}

		std::cout << "\n";
	}
}
