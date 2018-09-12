#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>
#include <numeric>

namespace _59
{
	int fairRations(std::vector<int> B) {
		int cnt(0);
		if (std::accumulate(B.begin(), B.end(), 0) % 2 == 1)
		{
			return -1;
		}
		else {
			for (auto it = B.begin(); it != B.end() - 1; ++it)
			{
				if (*it % 2 == 1)
				{
					cnt += 2;
					++*(it + 1);
				}
			}
		}
		return cnt;
	}



	void fair()
	{
		int N;
		std::cin >> N;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string B_temp_temp;
		getline(std::cin, B_temp_temp);

		std::vector<std::string> B_temp = split_string(B_temp_temp);

		std::vector<int> B(N);

		for (int i = 0; i < N; i++) {
			int B_item = std::stoi(B_temp[i]);

			B[i] = B_item;
		}

		int result = fairRations(B);
		if (result == -1) {
			std::cout << "NO\n";
		}
		else {
			std::cout << result << "\n";
		}

	}
}
