#pragma once
#include <iostream>
#include <string>
#include <array>
namespace _77
{
	int anagram(std::string s)
	{
		int tmp = s.length();
		if (s.length() % 2 == 1)
		{
			return -1;
		}
		else
		{
			std::string left = s.substr(0, s.length() / 2);
			std::string right = s.substr(s.length() / 2, s.length() - 1);
			int cnt(0);
			std::array<int, 26> left_a;
			left_a.fill(0);
			std::array<int, 26> right_a{ 0 };
			right_a.fill(0);
			for (int i = 0; i < s.length() / 2; ++i)
			{
				++left_a[left[i] - 97];
				++right_a[right[i*2] - 97];
			}
			for (int i = 0; i<26; i++)
				if (left_a[i] != right_a[i] && left_a[i]>right_a[i])
					cnt += left_a[i] - right_a[i];
			return cnt;
		}
		return -1;
	}

	void ana()
	{
		int q;
		std::cin >> q;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s;
			getline(std::cin, s);

			int result = anagram(s);

			std::cout << result << "\n";
		}

	}
}
