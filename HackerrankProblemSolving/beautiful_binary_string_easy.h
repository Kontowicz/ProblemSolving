#pragma once
#include <string>
#include <regex>
#include <iostream>

namespace  _97
{
	int beautifulBinaryString(std::string b) {
		return ((b.length() - regex_replace(b, std::regex("010"), "").length())) / 3;
	}

	void beautiful_binary_string()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string b;
		getline(std::cin, b);

		const int result = beautifulBinaryString(b);

		std::cout << result << "\n";
	}
}
