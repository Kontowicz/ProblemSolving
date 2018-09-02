#pragma once

namespace _27
{
	int camelcase(std::string s) {
		int cnt(0);
		for(auto cha: s){
			if(static_cast<int>(cha)>=65 && static_cast<int>(cha)<=90)
				++cnt;
		}
		return ++cnt;
	}
	
	void camelcase()
	{
		std::string s;
		getline(std::cin, s);

		int result = camelcase(s);

		std::cout << result << "\n";
	}
}