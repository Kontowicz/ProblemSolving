#pragma once
#include <cmath>
#include "string_split.h"
#include <iostream>

namespace _107
{
	long sumXor(long n) {
		long cnt = 0;
		/* BRUTE FORCE
			for(long i = 0; i<=n; ++i)
		 {
			 if((i^n)==(i+n))
			 {
				 ++cnt;
			 }
		 }*/
		while (n)
		{
			if (n % 2 == 0)
				++cnt;
			n /= 2;
		}
		return pow(2, cnt);
	}

	void sum_vs_xor()
	{
		std::string n_temp;
		getline(std::cin, n_temp);

		long n = stol(ltrim(rtrim(n_temp)));

		long result = sumXor(n);

		std::cout << result << "\n";
	}
}
