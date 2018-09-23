#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

namespace _93
{
	std::string gridChallenge(std::vector<std::string> grid) 
	{

		if (grid.size() <= 1) 
			return "YES";

		sort(grid[0].begin(), grid[0].end());

		for (int i = 1; i < grid.size(); ++i)
		{
			sort(grid[i].begin(), grid[i].end());
			for (int j = 0; j < grid[0].size(); ++j)
			{
				if (grid[i - 1][j] > grid[i][j])
					return "NO";
			}
		}

		return "YES";
	}
	
	void grid_ch()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::vector<std::string> grid(n);

			for (int i = 0; i < n; i++) {
				std::string grid_item;
				getline(std::cin, grid_item);

				grid[i] = grid_item;
			}

			std::string result = gridChallenge(grid);

			std::cout << result << "\n";
		}
	}
}
