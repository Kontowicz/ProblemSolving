#pragma once

namespace _28
{
	std::string pangrams(std::string s) {
		std::map<char, int> tmp;
		
		for(int i=97; i<123; ++i){
			tmp[static_cast<char>(i)] = 0;
		}
		
		for(auto e: s){
			tmp[tolower(e)] = 1;
		}
		
		for(auto it = tmp.begin(); it!=tmp.end(); it++){
			if(it->second==0){
				return "not pangram";            
			}
		}
		
		return "pangram";
	}

	
	void pangrams()
	{
		std::string s;
		getline(std::cin, s);

		std::string result = pangrams(s);

		std::cout << result << "\n";

	}
}