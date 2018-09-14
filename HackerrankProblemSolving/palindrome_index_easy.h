#pragma once
#include <iostream>
#include <string>

namespace _69
{
	bool is_palindrome(const std::string & test)
	{
		int j = test.length() - 1;
		for (int i = 0; i <= j; ++i, --j)
		{
			if (test[i] != test[j])
			{
				return false;
			}
		}
		return true;
	}

	int palindromeIndex(std::string s) {
		int cnt = 0;
		int j = s.length() - 1;
		for (int i = 0; i <= j; ++i, --j)
		{
			if (s[i] != s[j])
			{
				s.erase(s.begin() + i);

				if (is_palindrome(s))
				{
					return i;
				}
				else {
					return j;
				}
			}
		}
		return -1;
	}


	void palindrome()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s;
			getline(std::cin, s);

			int result = palindromeIndex(s);

			std::cout << result << "\n";
		}

	}
}
