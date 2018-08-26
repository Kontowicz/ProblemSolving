#pragma once
#include <algorithm>
#include <string>
#include <vector>
#include <iso646.h>
#include <functional>


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

std::string ltrim(const std::string &str) {
	std::string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(std::ptr_fun<int, int>(isspace)))
	);

	return s;
}

std::string rtrim(const std::string &str) {
	std::string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(std::ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

std::vector<std::string> split(const std::string &str) {
	std::vector<std::string> tokens;

	std::string::size_type start = 0;
	std::string::size_type end = 0;

	while ((end = str.find(" ", start)) != std::string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}