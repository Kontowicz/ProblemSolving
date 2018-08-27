#pragma once
#include <ios>
#include <iostream>

namespace _7
{
	void staircase(int n) {
		auto str = [](int len) { std::string tmp = ""; for (int i = 0; i<len; i++) tmp += '#'; return tmp; };
		for (int i = 1; i <= n; i++) {
			std::cout.width(n); std::cout << std::right << str(i) << '\n';
		}
	}


	void staircase_easy()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		staircase(n);
	}
}
