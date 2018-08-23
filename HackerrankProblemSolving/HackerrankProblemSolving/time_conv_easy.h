#pragma once
#include <string>
#include <iostream>

namespace tenth
{
	std::string timeConversion(std::string s) {
		int hour = std::stoi(s.substr(0, 2));
		if (s.substr(s.length() - 2, s.length()) == "AM")
		{
			if (hour == 12) {
				return "00:" + s.substr(3, s.length() - 5);
			}
			else
				return s.substr(0, s.length() - 2);
		}
		else {
			//PM

			if (hour == 12) {
				return s.substr(0, s.length() - 2);
			}
			else {
				return std::to_string(hour + 12) + s.substr(2, s.length() - 4);
			}
		}
	}

	void time_conv()
	{
		std::string s;
		getline(std::cin, s);

		std::string result = timeConversion(s);

		std::cout << result << "\n";
	}
}
