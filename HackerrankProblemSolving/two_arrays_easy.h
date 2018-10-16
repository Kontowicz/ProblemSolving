#pragma once
#include <algorithm>
#include <string>
#include <vector>
#include "string_split.h"
#include <iostream>

namespace _100
{
	std::string twoArrays(int k, std::vector<int> A, std::vector<int> B) {
		std::sort(A.begin(), A.end());
		std::sort(B.begin(), B.end(), std::greater<int>());

		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] + B[i] < k)
			{
				return "NO";
			}
		}

		return "YES";
	}

	void two_arrays()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string nk_temp;
			getline(std::cin, nk_temp);

			std::vector<std::string> nk = split_string(nk_temp);

			int n = std::stoi(nk[0]);

			int k = std::stoi(nk[1]);

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

			std::string result = twoArrays(k, A, B);

			std::cout << result << "\n";
		}
	}
}
