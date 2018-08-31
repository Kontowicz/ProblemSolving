#pragma once

namespace _25
{
	int utopianTree(int n) {
		int cnt(1);

		for(int i=0; i <  n; i++){
			if(i%2==0)
				cnt*=2;
			else 
				cnt += 1;
		}
		return cnt;
	}
	
	void tree()
	{
		int t;
		std::cin >> t;
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

		for (int t_itr = 0; t_itr < t; t_itr++) {
			int n;
			std::cin >> n;
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

			int result = utopianTree(n);

			std::cout<< << result << "\n";
		}
	}
}