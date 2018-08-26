#pragma once

namespace eighteenth
{
	std::string dayOfProgrammer(int year) {
		bool is_leap = false;
		int days(0);
		days = ((5 * 31) + 60);

		if (year<1918) {
			days += year % 4 ? 28 : 29;
		}
		else if (year>1918) {
			if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
				days += 29;
			}
			else {
				days += 28;
			}
		}
		else {
			days += 15;
		}

		days = 256 - days;
		return std::to_string(days) + ".09." + std::to_string(year);
	}
	
	void day_of_pragrammer()
	{
		std::string year_temp;
		getline(std::cin, year_temp);

		int year = stoi(ltrim(rtrim(year_temp)));

		std::string result = dayOfProgrammer(year);

		std::cout << result << "\n";

	}
}