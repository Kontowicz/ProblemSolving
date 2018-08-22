#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <iso646.h>
#include <string>

namespace second
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


	vector<string> split_string(string input_string) {
		string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
			return x == y and x == ' ';
		});

		input_string.erase(new_end, input_string.end());

		while (input_string[input_string.length() - 1] == ' ') {
			input_string.pop_back();
		}

		vector<string> splits;
		char delimiter = ' ';

		size_t i = 0;
		size_t pos = input_string.find(delimiter);

		while (pos != string::npos) {
			splits.push_back(input_string.substr(i, pos - i));

			i = pos + 1;
			pos = input_string.find(delimiter, i);
		}

		splits.push_back(input_string.substr(i, std::min(pos, input_string.length()) - i + 1));

		return splits;
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
