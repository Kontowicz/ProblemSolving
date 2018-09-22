#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace _86
{
	int gemstones(std::vector<std::string> arr) 
	{
		std::vector<int> occurences(26, 0);

		int cnt(0);
		for (auto row : arr)
		{
			for (auto ch : row)
			{
				if (occurences[static_cast<short>(ch) - 'a'] == cnt)
				{
					++occurences[static_cast<short>(ch) - 'a'];
				}
			}
			++cnt;
		}

		int to_return = 0;
		for (auto num : occurences)
		{
			if (num == arr.size())
				++to_return;
		}


		return to_return;
	}
	
	void gem()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::vector<std::string> arr(n);

		for (int i = 0; i < n; i++) {
			std::string arr_item;
			getline(std::cin, arr_item);

			arr[i] = arr_item;
		}

		int result = gemstones(arr);

		std::cout << result << "\n";
	}
}
