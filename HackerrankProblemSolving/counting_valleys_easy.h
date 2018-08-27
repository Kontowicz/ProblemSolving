#pragma once
#include <iostream>
#include <string>

namespace _22
{
	int countingValleys(int n, std::string s) {
		int cnt(0);
		int lv(0);
		for (auto e : s) {
			if (e == 'U')
				++lv;
			else if (e == 'D')
				--lv;

			if (lv == 0 && e == 'U')
				++cnt;
		}
		return cnt;
	}


	void val()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string s;
		getline(std::cin, s);

		int result = countingValleys(n, s);

		std::cout << result << "\n";
	}
}
