#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "string_split.h"
#include <map>

namespace _71
{
	int lonelyinteger(std::vector<int> a)
	{
		std::map<int, int> occurence;
		for (auto num : a)
		{
			++occurence[num];
		}

		for (auto it = occurence.begin(); it != occurence.end(); ++it)
		{
			if (it->second == 1)
			{
				return it->first;
			}
		}
		return -1;
	}

	void lonely()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string a_temp_temp;
		getline(std::cin, a_temp_temp);

		std::vector<std::string> a_temp = split_string(a_temp_temp);

		std::vector<int> a(n);

		for (int i = 0; i < n; i++) {
			int a_item = std::stoi(a_temp[i]);

			a[i] = a_item;
		}

		int result = lonelyinteger(a);

		std::cout << result << "\n";
	}
}
