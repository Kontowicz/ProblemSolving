#pragma once

namespace _29
{
	std::vector<int> circularArrayRotation(std::vector<int> a, int k, std::vector<int> queries)
	{
#pragma region my own solution should work on comlexity
		/*  
		std::vector<int> rotated;
		int tmp = k%a.size();
		for(int i=0; i<tmp; ++i)
		{
			rotated.clear();
			rotated.push_back(a[a.size()-1]);
			for(int j=0; j<a.size()-1; ++j)
			{
				rotated.push_back(a[j]);
			}
			a = rotated;
		}
		*/
#pragma endregion
			
#pragma region solution_using std::rotate
		k = k%a.size();
		k = a.size() - k;
		std::rotate(a.begin(), a.begin()+k, a.end());
#pragma endregion
		std::vector<int> to_return;
		for(int i=0; i<queries.size(); i++)
		{
			to_return.push_back(a[queries[i]]);
		}
		return to_return;
	}
	
	
	
	void circular()
	{
		std::string nkq_temp;
		getline(std::cin, nkq_temp);

		std::vector<std::string> nkq = split_string(nkq_temp);

		int n = stoi(nkq[0]);

		int k = stoi(nkq[1]);

		int q = stoi(nkq[2]);

		std::string a_temp_temp;
		getline(std::cin, a_temp_temp);

		std::vector<std::string> a_temp = split_string(a_temp_temp);

		std::vector<int> a(n);

		for (int i = 0; i < n; i++) {
			int a_item = stoi(a_temp[i]);

			a[i] = a_item;
		}

		std::vector<int> queries(q);

		for (int i = 0; i < q; i++) {
			int queries_item;
			std::cin >> queries_item;
			std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

			queries[i] = queries_item;
		}

		std::vector<int> result = circularArrayRotation(a, k, queries);

		for (int i = 0; i < result.size(); i++) {
			std::cout << result[i];

			if (i != result.size() - 1) {
				fout << "\n";
			}
		}

		std::cout << "\n";
	}
}
