#pragma once
#include <vector>
#include <iostream>

namespace _11
{
	std::vector<int> gradingStudents(std::vector<int> grades) {
		std::vector<int> to_ret;
		for (auto e : grades) {
			if (e<38) {
				to_ret.push_back(e);
			}
			else if (((static_cast<int>(e / 5 + 1) * 5) - e<3)) {
				to_ret.push_back(static_cast<int>(e / 5 + 1) * 5);
			}
			else {
				to_ret.push_back(e);
			}
		}
		return to_ret;
	}

	void grade()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::vector<int> grades(n);

		for (int grades_itr = 0; grades_itr < n; grades_itr++) {
			int grades_item;
			std::cin >> grades_item;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			grades[grades_itr] = grades_item;
		}

		std::vector<int> result = gradingStudents(grades);

		for (int result_itr = 0; result_itr < result.size(); result_itr++) {
			std::cout << result[result_itr];

			if (result_itr != result.size() - 1) {
				std::cout << "\n";
			}
		}
	}
}
