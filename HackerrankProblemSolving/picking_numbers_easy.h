#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "string_split.h"

namespace _25
{
	int pickingNumbers(std::vector<int> a) {

		std::sort(a.begin(), a.end());
		int cnt(0);
		std::vector<int> po;
		int first = 0;
		for (int i = 0; i<a.size(); i++)
		{
			cnt = 0;
			first = a[i];
			for (int j = i; j<a.size(); j++)
			{
				if (abs(a[i] - a[j]) <= 1 && abs(first - a[j]) <= 1)
				{
					++cnt;
				}
			}
			po.push_back(cnt);
		}
		
		return *std::max_element(po.begin(), po.end());
	}

	void pick()
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

		int result = pickingNumbers(a);

		std::cout << result << "\n";
	}
}
