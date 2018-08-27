#pragma once
#include <iostream>
using std::cin;
using std::cout;

namespace _1
{
	int solveMeFirst(int a, int b) {
		return a + b;
	}

	void solve_me_first() {
		int num1, num2;
		int sum;
		cin >> num1 >> num2;
		sum = solveMeFirst(num1, num2);
		cout << sum;
	}
}