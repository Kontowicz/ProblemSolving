#pragma once
#include <iostream>
#include <string>

namespace _45
{
	int theLoveLetterMystery(std::string s) {
		int end_ = s.length() - 1;
		int cnt(0);
		for (int i = 0; i <= end_; ++i)
		{
			cnt += abs(s[i] - s[end_]);
			--end_;
		}
		return cnt;
	}

	void love()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s;
			getline(std::cin, s);

			int result = theLoveLetterMystery(s);

			std::cout << result << "\n";
		}
	}
}
