#pragma once
#include <ios>
#include <iostream>
#include <vector>

namespace  _50
{
	int findDigits(int n) {
		int c(n);
		int cnt(0);
		std::vector<int> digits;
		while (n != 0)
		{
			digits.push_back(n % 10);
			n = n / 10;
		}

		for (auto it = digits.begin(); it != digits.end(); it++)
		{
			if (*it == 0 || c % *it != 0)
				continue;
			++cnt;

		}

		return cnt;
	}


	void find_digit()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			int result = findDigits(n);

			std::cout << result << "\n";
		}
	}
}
