#pragma once
#include <string>
#include <iostream>
#include "string_split.h"

namespace thirteenth
{
	std::string kangaroo(int x1, int v1, int x2, int v2) {
		double tmp(0);
		double xx1 = static_cast<double>(x1);
		double xx2 = static_cast<double>(x2);

		double vv1 = static_cast<double>(v1);
		double vv2 = static_cast<double>(v2);
		tmp = ((abs(xx1 - xx2)) / (abs(vv2 - vv1)));

		if (xx2>xx1&&vv2>vv1) {
			return "NO\n";
		}
		else {
			if (abs(tmp - (int)tmp) == 0) {
				return "YES\n";
			}
			else
				return "NO\n";
		}
	}

	void kangaroo_()
	{
		std::string x1V1X2V2_temp;
		getline(std::cin, x1V1X2V2_temp);

		std::vector<std::string> x1V1X2V2 = split_string(x1V1X2V2_temp);

		int x1 = std::stoi(x1V1X2V2[0]);

		int v1 = std::stoi(x1V1X2V2[1]);

		int x2 = std::stoi(x1V1X2V2[2]);

		int v2 = std::stoi(x1V1X2V2[3]);

		std::string result = kangaroo(x1, v1, x2, v2);

		std::cout << result << "\n";
	}
}
