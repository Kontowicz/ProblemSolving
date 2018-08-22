#pragma once

namespace fourth
{
	std::vector<std::string> split_string(std::string input_string) {
		std::string::iterator new_end = std::unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
			return x == y and x == ' ';
		});

		input_string.erase(new_end, input_string.end());

		while (input_string[input_string.length() - 1] == ' ') {
			input_string.pop_back();
		}

		std::vector<std::string> splits;
		char delimiter = ' ';

		size_t i = 0;
		size_t pos = input_string.find(delimiter);

		while (pos != std::string::npos) {
			splits.push_back(input_string.substr(i, pos - i));

			i = pos + 1;
			pos = input_string.find(delimiter, i);
		}
		splits.push_back(input_string.substr(i, std::min(pos, input_string.length()) - i + 1));
		return splits;
	}

	long aVeryBigSum(std::vector<long> ar) {
		long sum(0);
		for (auto e : ar)
			sum += e;
		return sum;
	}


	void very_big_sum() {
		int ar_count;
		cin >> ar_count;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string ar_temp_temp;
		getline(cin, ar_temp_temp);

		std::vector<std::string> ar_temp = second::split_string(ar_temp_temp);

		std::vector<long> ar(ar_count);

		for (int i = 0; i < ar_count; i++) {
			long ar_item = stol(ar_temp[i]);

			ar[i] = ar_item;
		}

		long result = aVeryBigSum(ar);

		cout << result << "\n";
	}
}
