#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

namespace _106
{
	int maximizingXor(int l, int r) {
		std::vector<int> result;
		for (int i = l; i <= r; i++)
		{
			for (int j = i; j <= r; j++)
				result.push_back((i^j));
		}
		return *std::max_element(result.begin(), result.end());
	}

	void maximazing_xor()
	{
		int l;
		std::cin >> l;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int r;
		std::cin >> r;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int result = maximizingXor(l, r);

		std::cout << result << "\n";
	}
}
