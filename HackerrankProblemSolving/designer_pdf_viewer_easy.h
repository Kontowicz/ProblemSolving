#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "string_split.h"

namespace _35
{
	int designerPdfViewer(std::vector<int> h, std::string word) {
		int max = 0;
		for (char c : word) {
			if (max<h[static_cast<short>(c) - 97])
				max = h[static_cast<short>(c) - 97];
		}

		return max * word.length();
	}
	void designer()
	{
		std::string h_temp_temp;
		getline(std::cin, h_temp_temp);

		std::vector<std::string> h_temp = split_string(h_temp_temp);

		std::vector<int> h(26);

		for (int i = 0; i < 26; i++) {
			int h_item = std::stoi(h_temp[i]);

			h[i] = h_item;
		}

		std::string word;
		getline(std::cin, word);

		int result = designerPdfViewer(h, word);

		std::cout << result << "\n";
	}
}
