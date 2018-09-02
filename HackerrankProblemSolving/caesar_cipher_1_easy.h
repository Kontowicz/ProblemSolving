#pragma once

namespace _32
{
	std::string caesarCipher(std::string s, int k)
	{
		std::string encrypted = "";
		for(auto letter : s)
		{
			if((static_cast<short>(letter)>=65 && static_cast<short>(letter)<=90) || (static_cast<short>(letter)>=97 && static_cast<short>(letter)<=122)){
				if(static_cast<short>(letter)>=65 && static_cast<short>(letter)<=90)  
				{
					encrypted += static_cast<char>(((letter+k-65)%26)+65);
				}
				else if(static_cast<short>(letter)>=97 && static_cast<short>(letter)<=122)
				{
					 encrypted += static_cast<char>(((letter+k-97)%26)+97);
				} 
			}else{
				encrypted += letter;
			}
		}
		return encrypted;
	}

	void cesar()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string s;
		getline(std::cin, s);

		int k;
		std::cin >> k;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string result = caesarCipher(s, k);

		std::cout << result << "\n";
	}
}