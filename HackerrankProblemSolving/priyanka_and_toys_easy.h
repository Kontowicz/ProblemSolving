#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _103
{
	int toys(std::vector<int> w) {
		std::sort(w.begin(), w.end());
		int to_return = 0;
		int min = *w.begin();
		for (auto it = w.begin(); it != w.end(); ++it)
		{
			if ((min + 4) < *it)
			{
				++to_return;
				min = *it;
			}
		}
		return to_return + 1;
	}
	
	void priyaka_and_toys()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string w_temp_temp;
		getline(std::cin, w_temp_temp);

		std::vector<std::string> w_temp = split_string(w_temp_temp);

		std::vector<int> w(n);

		for (int i = 0; i < n; i++) {
			int w_item = std::stoi(w_temp[i]);

			w[i] = w_item;
		}

		int result = toys(w);

		std::cout << result << "\n";
	}
}
