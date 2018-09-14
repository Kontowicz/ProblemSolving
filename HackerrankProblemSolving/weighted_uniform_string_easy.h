#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

namespace _67
{
	std::vector<std::string> weightedUniformStrings(std::string s, std::vector<int> queries) {
		std::vector<std::string> to_return;

		std::unordered_set<long long> values;
		int occ = 0;
		char tmp = s[0];
		for (int i = 0; i<s.length(); ++i)
		{
			++occ;
			if (s[i] != tmp)
			{
				tmp = s[i];
				--i;
				occ = 0;
			}
			values.emplace((static_cast<long long>(s[i]) - 96) * occ);
		}

		std::string ans = "No";
		for (auto v : queries)
		{
			ans = "No";
			if (values.find(v) != values.end())
			{
				ans = "Yes";
			}
			to_return.push_back(ans);
		}
		return to_return;
	}
	
	void weighted()
	{
		std::string s;
		getline(std::cin, s);

		int queries_count;
		std::cin >> queries_count;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::vector<int> queries(queries_count);

		for (int i = 0; i < queries_count; i++) {
			int queries_item;
			std::cin >> queries_item;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			queries[i] = queries_item;
		}

		std::vector<std::string> result = weightedUniformStrings(s, queries);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				std::cout << "\n";
			}
		}

		std::cout << "\n";

	}
}
