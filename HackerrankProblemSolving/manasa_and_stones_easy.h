#pragma once
#include <vector>
#include <iostream>

namespace _92
{
	std::vector<int> stones(int n, int a, int b) 
	{
		std::vector<int> permutations;

		int min = (a<b) ? a : b;
		int term = (n - 1)*min;

		permutations.push_back(term);
		int diff = ((min == b) ? a : b) - min;

		for (int i = 0; i<n - 1 && diff; ++i) {
			term += diff;
			permutations.push_back(term);
		}

		return permutations;
	}

	void manasa()
	{
		int T;
		std::cin >> T;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int T_itr = 0; T_itr < T; T_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			int a;
			std::cin >> a;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			int b;
			std::cin >> b;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::vector<int> result = stones(n, a, b);

			for (int i = 0; i < result.size(); i++) {
				std::cout << result[i];

				if (i != result.size() - 1) {
					std::cout << " ";
				}
			}

			std::cout << "\n";
		}
	}
}
