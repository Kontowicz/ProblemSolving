#pragma once
#include <iostream>
#include <string>

namespace _56
{
	void kaprekarNumbers(int p, int q) {
		bool range = true;
		for (long long i = p; i <= q; ++i)
		{
			if (i == 1) {
				range = false;
				std::cout << 1 << " "; continue;
			}

			long long root = (long long)i * i;

			std::string s_i = std::to_string(i);
			int d = s_i.length();
			std::string rot_s = std::to_string(root);

			int l = rot_s.length();
			std::string right = rot_s.substr(l - d, l);
			std::string left = rot_s.substr(0, l - d);
			if (right == "" || left == "")
			{
				continue;
			}
			long long a = std::stoll(right);
			long long b = std::stoll(left);
			if (a + b == i) {
				std::cout << i << " "; range = false;
			}
		}
		if (range)
			std::cout << "INVALID RANGE";

	}

	void kape()
	{
		int p;
		std::cin >> p;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		kaprekarNumbers(p, q);
	}
}
