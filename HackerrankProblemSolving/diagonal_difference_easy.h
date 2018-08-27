#pragma once
#include <ios>
#include <iostream>
#include <vector>

namespace _5
{
	int diagonalDifference(std::vector<std::vector<int>> arr) {
		int left(0);
		int right(0);
		for (int i(0); i<arr.size(); i++)
			left += arr[i][i];
		int n = 0;
		for (int i(arr.size() - 1); i >= 0; i--) {
			right += arr[i][n];
			++n;
		}
		return abs(left - right);
	}


	void diff()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::vector<std::vector<int>> arr(n);
		for (int i = 0; i < n; i++) {
			arr[i].resize(n);

			for (int j = 0; j < n; j++) {
				std::cin >> arr[i][j];
			}

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		int result = diagonalDifference(arr);
		std::cout << result << "\n";
	}
}
