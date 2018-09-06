#pragma once
#include <ios>
#include <iostream>

namespace _39
{
	
	int viralAdvertising(int n) {
		int actual = 5, cnt = 0;
		for (int i = 1; i <= n; ++i)
		{
			cnt +=  (actual / 2);
			actual = (actual  / 2) * 3;
		}
		return cnt;
	}

	void viral()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		int result = viralAdvertising(n);

		std::cout << result << "\n";
	}
}
