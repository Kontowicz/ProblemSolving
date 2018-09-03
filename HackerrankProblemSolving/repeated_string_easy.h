#pragma once
#include <ios>
#include <iostream>
#include <string>

namespace _34
{
	long repeatedString(std::string s, long n)
	{
		long to_ret(0);

		to_ret += (n / s.length()) * std::count(s.begin(), s.end(), 'a');
		to_ret += std::count(s.begin(), s.begin() + n % s.length(), 'a');
		return to_ret;
	}

	void repeated()
	{
		std::string s;
		getline(std::cin, s);

		long n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		long result = repeatedString(s, n);

		std::cout << result << "\n";

	}
}
