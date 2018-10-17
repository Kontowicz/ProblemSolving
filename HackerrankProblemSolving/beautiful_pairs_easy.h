#pragma once
#include <vector>
#include <set>
#include <string>
#include "string_split.h"
#include <iostream>

namespace _102
{
	int beautifulPairs(std::vector<int> A, std::vector<int> B) {
		std::set<int> A_;
		std::set<int> B_;
		int pair = 0;

		for (int i = 0; i < A.size(); ++i)
		{
			for (int j = 0; j < B.size(); ++j)
			{
				if (A[i] == B[j] && (!(A_.find(i) != A_.end()) && ((!(B_.find(j) != B_.end())))))
				{
					A_.insert(i);
					B_.insert(j);
					++pair;
				}
			}
		}

		return pair < A.size() ? pair + 1 : pair - 1;
	}

	void beautuful_pairs()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string A_temp_temp;
		getline(std::cin, A_temp_temp);

		std::vector<std::string> A_temp = split_string(A_temp_temp);

		std::vector<int> A(n);

		for (int i = 0; i < n; i++) {
			int A_item = std::stoi(A_temp[i]);

			A[i] = A_item;
		}

		std::string B_temp_temp;
		getline(std::cin, B_temp_temp);

		std::vector<std::string> B_temp = split_string(B_temp_temp);

		std::vector<int> B(n);

		for (int i = 0; i < n; i++) {
			int B_item = std::stoi(B_temp[i]);

			B[i] = B_item;
		}

		int result = beautifulPairs(A, B);

		std::cout << result << "\n";
	}
}
