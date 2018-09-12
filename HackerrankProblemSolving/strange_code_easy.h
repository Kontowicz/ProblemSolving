#pragma once
#include <ios>
#include <iostream>

namespace _60
{
	long strangeCounter(long t) {
		long start(3);
		while (t>start)
		{
			t = t - start;
			start *= 2;
		}
		return (start - t + 1);
	}


	void strange()
	{
		long t;
		std::cin >> t;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		long result = strangeCounter(t);

		std::cout << result << "\n";
	}
}
