#pragma once
#include <iostream>
#include <algorithm>

namespace _21
{
	int pageCount(int n, int p) {
		return std::min(n / 2 - p / 2, p / 2);
	}


	void book()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int p;
		std::cin >> p;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int result = pageCount(n, p);

		std::cout << result << "\n";
	}
}
