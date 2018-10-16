#pragma once
#include <limits>
#include <iostream>

namespace _101
{
	long flippingBits(long n) {
		return (unsigned int)(~n);
	}

	void flipping_bits()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			long n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			long result = flippingBits(n);

			std::cout << result << "\n";
		}
	}
}
