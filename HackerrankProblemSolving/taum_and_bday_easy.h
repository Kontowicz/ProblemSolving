#pragma once
#include <string>
#include "string_split.h"
#include <iostream>

namespace  _57
{
	long long taumBday(long long b, long long w, long long bc, long long wc, long long z) {

		if (wc + z < bc) bc = wc + z;

		if (bc + z < wc) wc = bc + z;
		long long a = (b * bc) + (w * wc);
		return a;
	}

	void taum()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string bw_temp;
			getline(std::cin, bw_temp);

			std::vector<std::string> bw = split_string(bw_temp);

			int b = stoi(bw[0]);

			int w = std::stoi(bw[1]);

			std::string bcWcz_temp;
			getline(std::cin, bcWcz_temp);

			std::vector<std::string> bcWcz = split_string(bcWcz_temp);

			int bc = std::stoi(bcWcz[0]);

			int wc = std::stoi(bcWcz[1]);

			int z = std::stoi(bcWcz[2]);

			long long result = taumBday(b, w, bc, wc, z);

			std::cout << result << "\n";
		}

	}
}
