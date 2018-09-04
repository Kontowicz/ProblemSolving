#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _37
{
	std::string angryProfessor(int k, std::vector<int> a) {
		int cnt(0);
		for (auto num : a) {
			if (num <= 0)
				++cnt;
		}
		return k <= cnt ? "NO" : "YES";
	}

	void angry()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string nk_temp;
			getline(std::cin, nk_temp);

			std::vector<std::string> nk = split_string(nk_temp);

			int n = std::stoi(nk[0]);

			int k = std::stoi(nk[1]);

			std::string a_temp_temp;
			getline(std::cin, a_temp_temp);

			std::vector<std::string> a_temp = split_string(a_temp_temp);

			std::vector<int> a(n);

			for (int i = 0; i < n; i++) {
				int a_item = std::stoi(a_temp[i]);

				a[i] = a_item;
			}

			std::string result = angryProfessor(k, a);

			std::cout << result << "\n";
		}

	}
}
