#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "string_split.h"

namespace nineteenth
{
	void bonAppetit(std::vector<int> bill, int k, int b) {
		double sum(0);
		for (auto e : bill) {
			sum += e;
		}

		if (((sum - bill[k]) / 2) == b) {
			std::cout << "Bon Appetit";
		}
		else {
			std::cout << ((sum - (sum - bill[k])) / 2);
		}
	}

	void bon_app()
	{
		std::string nk_temp;
		getline(std::cin, nk_temp);

		std::vector<std::string> nk = split(rtrim(nk_temp));

		int n = stoi(nk[0]);

		int k = stoi(nk[1]);

		std::string bill_temp_temp;
		getline(std::cin, bill_temp_temp);

		std::vector<std::string> bill_temp = split(rtrim(bill_temp_temp));

		std::vector<int> bill(n);

		for (int i = 0; i < n; i++) {
			int bill_item = stoi(bill_temp[i]);

			bill[i] = bill_item;
		}

		std::string b_temp;
		getline(std::cin, b_temp);

		int b = stoi(ltrim(rtrim(b_temp)));

		bonAppetit(bill, k, b);
	}
}
