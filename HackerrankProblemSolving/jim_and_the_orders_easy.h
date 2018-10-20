#pragma once
#include <map>
#include <vector>
#include <iostream>

namespace _105
{
	std::vector<int> jimOrders(std::vector<std::vector<int>> orders) {
		std::multimap<int, int> m;
		for (int i = 0; i < orders.size(); i++)
		{
			m.insert(std::make_pair(orders[i][0] + orders[i][1], i + 1));
		}
		std::vector<int> to_return;
		for (std::multimap<int, int >::iterator me = m.begin(); me != m.end(); me++)
			to_return.push_back(me->second);
		return to_return;
	}

	void jim_and_the_orders()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::vector<std::vector<int>> orders(n);
		for (int i = 0; i < n; i++) {
			orders[i].resize(2);

			for (int j = 0; j < 2; j++) {
				std::cin >> orders[i][j];
			}

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		std::vector<int> result = jimOrders(orders);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << " ";
			}
		}
	}
}
