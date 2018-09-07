#pragma once
#include <vector>
#include "string_split.h"
#include <iostream>


namespace _40
{
	int introTutorial(int V, std::vector<int> arr) {
		int i(0);
		for (int num : arr)
		{
			if (num == V)
				break;
			++i;
		}
		return i;
	}


	void tutorial()
	{
		int V;
		std::cin >> V;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		std::vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = std::stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		int result = introTutorial(V, arr);

		std::cout << result << "\n";
	}
}
