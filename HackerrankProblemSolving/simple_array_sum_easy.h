#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include "string_split.h"
#include <string>

namespace _2
{
	using std::vector;
	using std::string;
	using std::ofstream;
	using std::cin;
	using std::cout;

	int simpleArraySum(vector<int> ar) {
		int sum(0);
		for (auto e : ar)
			sum += e;

		return sum;
	}

	void simple_array_sum()
	{
		
		int ar_count;
		cin >> ar_count;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		string ar_temp_temp;
		getline(cin, ar_temp_temp);

		vector<string> ar_temp = split_string(ar_temp_temp);

		vector<int> ar(ar_count);

		for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
			int ar_item = stoi(ar_temp[ar_itr]);

			ar[ar_itr] = ar_item;
		}

		int result = simpleArraySum(ar);

		cout << result << "\n";
	}
}
