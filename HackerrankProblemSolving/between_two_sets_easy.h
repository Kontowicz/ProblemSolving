#pragma once
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _88
{
	int getTotalX(std::vector<int> a, std::vector<int> b) 
	{
		int cnt(0);

		for (int i = *a.begin(); i <= *b.begin(); ++i)
		{
			if (std::all_of(a.begin(), a.end(), [i](int elem) {return i % elem == 0; })
				&& std::all_of(b.begin(), b.end(), [i](int elem) {return elem % i == 0; }))
			{
				++cnt;
			}
		}
		return cnt;
	}


	void sets()
	{
		std::string nm_temp;
		getline(std::cin, nm_temp);

		std::vector<std::string> nm = split_string(nm_temp);

		int n = std::stoi(nm[0]);

		int m = std::stoi(nm[1]);

		std::string a_temp_temp;
		getline(std::cin, a_temp_temp);

		std::vector<std::string> a_temp = split_string(a_temp_temp);

		std::vector<int> a(n);

		for (int a_itr = 0; a_itr < n; a_itr++) {
			int a_item = std::stoi(a_temp[a_itr]);

			a[a_itr] = a_item;
		}

		std::string b_temp_temp;
		getline(std::cin, b_temp_temp);

		std::vector<std::string> b_temp = split_string(b_temp_temp);

		std::vector<int> b(m);

		for (int b_itr = 0; b_itr < m; b_itr++) {
			int b_item = std::stoi(b_temp[b_itr]);

			b[b_itr] = b_item;
		}

		int total = getTotalX(a, b);

		std::cout << total << "\n";
	}
}
