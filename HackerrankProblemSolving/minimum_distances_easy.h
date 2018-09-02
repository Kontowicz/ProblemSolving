#pragma once

namespace _30
{
	int minimumDistances(std::vector<int> a) {
		std::map<int, std::pair<int, bool>> distance;
		
		for(int i=0; i<a.size(); ++i)
		{
			if(distance.find(a[i])!=distance.end())
			{
				distance[a[i]] = std::pair<int, bool>(abs(std::get<0>(distance[a[i]])-i),true);
			}else{
				distance[a[i]] = std::pair<int,bool>(i,false);
			}
		}
		int min = a.size()+1;
		
		for(auto it = distance.begin(); it != distance.end(); ++it)
		{
			int aaaa = std::get<0>(it->second);
			if(min > aaaa && std::get<1>(it->second)==true)
			{
				min = std::get<0>(it->second);
			}
		}
		return min==a.size()+1?-1:min;
	}
	
	void distance()
	{
		int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::string a_temp_temp;
		getline(cin, a_temp_temp);

		std::vector<std::string> a_temp = split_string(a_temp_temp);

		std::vector<int> a(n);

		for (int i = 0; i < n; i++) {
			int a_item = stoi(a_temp[i]);

			a[i] = a_item;
		}

		int result = minimumDistances(a);

		std::cout << result << "\n";
	}
}