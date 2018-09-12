#pragma once
#include <string>
#include <iostream>
#include <map>

namespace _63
{
	std::string happyLadybugs(std::string b) 
	{
		if (b.empty()) return "YES";
		else if (b.size() == 1 && b[0] != '_') return "NO";

		bool move = false;
		std::map<char, int> color_occurence;

		for (char ch : b) {
			if (ch != '_')color_occurence[ch]++;
			else move = true;
		}

		if (!move) {

			if (b[0] != b[1]) return "NO";
			if (b[b.size() - 1] != b[b.size() - 2]) return "NO";

			for (int i = 1; i < b.size() - 1; i++)
				if (b[i] != b[i + 1] && b[i] != b[i - 1]) return "NO";

			return "YES";
		}

		for (auto& it : color_occurence)
			if (it.second < 2) return "NO";

		return "YES";
	}


	void happy()
	{
		int g;
		std::cin >> g;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int g_itr = 0; g_itr < g; g_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::string b;
			getline(std::cin, b);

			std::string result = happyLadybugs(b);

			std::cout << result << "\n";
		}
	}
}
