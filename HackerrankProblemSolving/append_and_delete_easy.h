#pragma once
#include <string>
#include <iostream>

namespace  _51
{
	std::string appendAndDelete(std::string s, std::string t, int k) {
		if (s == t)
			return "Yes";
		int pos(0); // Position of last identic char in two strings 
		int si(0); // Counter to iterate thru string s 
		int ti(0); // Counter to iterate thru string t
		while (s[si] == t[ti] && si < s.length() && ti < t.length())
		{
			++pos;
			++si;
			++ti;
		}
		if ((s.length() - si + t.length() - ti) <= k)
			return "Yes";
		else
			return "No";
	}
	
	void append()
	{
		std::string s;
		getline(std::cin, s);

		std::string t;
		getline(std::cin, t);

		int k;
		std::cin >> k;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string result = appendAndDelete(s, t, k);

		std::cout << result << "\n";
	}
}
