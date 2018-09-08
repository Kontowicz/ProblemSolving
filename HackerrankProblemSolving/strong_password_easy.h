#pragma once
#include <iostream>
#include <string>
#include <algorithm>

namespace  _44
{
	int minimumNumber(int n, std::string password) {
		int cnt(0);
		bool number(false);
		bool lower(false);
		bool upper(false);
		bool specjal(false);
		for (auto e : password)
		{   //liczby
			if ((short)e >= 48 && (short)e <= 57)
			{
				number = true;
			}
			if ((short)e >= 97 && (short)e <= 122) // lower
			{
				lower = true;
			}
			if ((short)e >= 65 && (short)e <= 90) // upper
			{
				upper = true;
			}
			if (e == '!' || e == '@' || e == '#' || e == '$' || e == '%' || e == '^' || e == '&' || e == '*' || e == '(' || e == ')' || e == '-' || e == '+')
			{
				specjal = true;
			}
		}
		if (!number)
			++cnt;
		if (!lower)
			++cnt;
		if (!upper)
			++cnt;
		if (!specjal)
			++cnt;
		return std::max(cnt, 6 - n);
	}

	
	void strong()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string password;
		getline(std::cin, password);

		int answer = minimumNumber(n, password);

		std::cout << answer << "\n";

	}
}
