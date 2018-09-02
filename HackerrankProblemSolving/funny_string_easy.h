#pragma once

namespace _33
{
	
	string funnyString(string s) 
	{
		int j = s.length()-1;
		
		std::vector<short> orginal;
		std::vector<short> reverse;
		
		for(int i=0; i<s.length()-1; ++i)
		{
			orginal.push_back(abs(s[i]-s[i+1]));
			reverse.push_back(abs(s[j]-s[j-1]));
			--j;
		}
		
		for(int i = 0; i<orginal.size(); ++i)
		{
			if(orginal[i]!=reverse[i]){
				return "Not Funny";
			}
		}
		return "Funny";
	}
	
	void funny()
	{
		 int q;
		std::cin >> q;
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

		for (int q_itr = 0; q_itr < q; q_itr++) {
			std::string s;
			getline(std::cin, s);

			std::string result = funnyString(s);

			std::cout<< << result << "\n";
		}
	}
	
}