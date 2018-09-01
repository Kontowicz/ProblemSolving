#pragma once

namespace _31
{
	int beautifulTriplets(int d, std::vector<int> arr) {
	   std::map<int, int> my_set;
		
		int cnt(0);
		
		for(auto num:arr)
		{
			if(my_set.count(num-d) && my_set.count(num-(2*d))) 
			{  
				++cnt;
			}
			my_set.insert(num);
		}
		
		return cnt;

	}
	
	void triplets()
	{
		std::string nd_temp;
		getline(std::cin, nd_temp);

		std::vector<std::string> nd = split_string(nd_temp);

		int n = stoi(nd[0]);

		int d = stoi(nd[1]);

		string arr_temp_temp;
		getline(std::cin, arr_temp_temp);

		std::vector<std::string> arr_temp = split_string(arr_temp_temp);

		vector<int> arr(n);

		for (int i = 0; i < n; i++) {
			int arr_item = stoi(arr_temp[i]);

			arr[i] = arr_item;
		}

		int result = beautifulTriplets(d, arr);

		std::cout << result << "\n";
	}
		
}