#pragma once
#include "string_split.h"
#include <iostream>

namespace _83
{
	void decentNumber(int n)
	{
		std::string to_return;
		if (n <= 5) 
		{
			if (!(n % 3)) 
			{
				to_return = std::string(3, '5');
			}
			else if (!(n % 5)) 
			{
				to_return = std::string(5, '3');
			}
		}
		else {
			for (int i = 0; i <= n / 5; i++) 
			{
				if ((n - 5 * i) % 3 == 0) 
				{
					to_return = std::string(n - 5 * i, '5') + std::string(5 * i, '3');
					break;
				}
			}
		}
		if (to_return.size() == 0) 
		{
			to_return = "-1";
		}
		std::cout << to_return << "\n";
	}
	
	void sherlock()
	{
		std::string t_temp;
		getline(std::cin, t_temp);
		int t = stoi(ltrim(rtrim(t_temp)));

		for (int t_itr = 0; t_itr < t; t_itr++) {
			std::string n_temp;
			getline(std::cin, n_temp);

			int n = stoi(ltrim(rtrim(n_temp)));

			decentNumber(n);
		}
	}
}
