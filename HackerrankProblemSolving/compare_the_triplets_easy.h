#pragma once
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>

namespace third
{
	std::vector<int> compareTriplets(const std::vector<int> &a, const std::vector<int> &b) {
		std::vector<int> to_return{ 0,0 };
		to_return.resize(2);
		for (int i(0); i< a.size(); i++) {
			if (a[i]>b[i])
				++to_return[0];
			else if (a[i]<b[i])
				++to_return[1];
			else if (a[i] == b[i])
				continue;
		}
		return to_return;

	}


	std::string ltrim(const std::string &str) {
		std::string s(str);

		s.erase(
			s.begin(),
			find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
		);

		return s;
	}

	std::string rtrim(const std::string &str) {
		std::string s(str);

		s.erase(
			find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
			s.end()
		);

		return s;
	}

	std::vector<std::string> split(const std::string &str) {
		std::vector<std::string> tokens;

		std::string::size_type start = 0;
		std::string::size_type end = 0;

		while ((end = str.find(" ", start)) != std::string::npos) {
			tokens.push_back(str.substr(start, end - start));

			start = end + 1;
		}

		tokens.push_back(str.substr(start));

		return tokens;
	}

	void compare_the_triplets()
	{
		std::string a_temp_temp;
		getline(std::cin, a_temp_temp);

		std::vector<std::string> a_temp = split(rtrim(a_temp_temp));

		std::vector<int> a(3);

		for (int i = 0; i < 3; i++) {
			int a_item = stoi(a_temp[i]);

			a[i] = a_item;
		}

		std::string b_temp_temp;
		getline(std::cin, b_temp_temp);

		std::vector<std::string> b_temp = split(rtrim(b_temp_temp));

		std::vector<int> b(3);

		for (int i = 0; i < 3; i++) {
			int b_item = stoi(b_temp[i]);

			b[i] = b_item;
		}

		std::vector<int> result = compareTriplets(a, b);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}
