#pragma once
#include <string>
#include <vector>
#include <iostream>

namespace _55
{
	std::vector<std::string> cavityMap(std::vector<std::string> grid) {

		for (int i = 1; i < grid.size() - 1; ++i)
		{
			for (int j = 1; j < grid.size() - 1; ++j)
			{
				if (grid[i][j]>grid[i][j - 1] && grid[i][j]>grid[i][j + 1] && grid[i][j] > grid[i - 1][j]
					&& grid[i][j] > grid[i + 1][j])
				{
					grid[i][j] = 'X';
				}
			}
		}

		return grid;
	}

	void cavity_map()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::vector<std::string> grid(n);

		for (int i = 0; i < n; i++) {
			std::string grid_item;
			getline(std::cin, grid_item);

			grid[i] = grid_item;
		}

		std::vector<std::string> result = cavityMap(grid);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}
	}
}
