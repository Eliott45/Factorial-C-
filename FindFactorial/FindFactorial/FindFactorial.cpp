﻿#include <iostream>

using namespace std;

/// <summary>
/// Finding the factorial.
/// </summary>
/// <param name="n">Non-negative integer n.</param>
/// <returns>Product of all positive integers less than or equal to n.</returns>
long long factorial(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}

int main()
{
    system("title Find factorial");

    int num;
    cout << "Write a number:";
    cin >> num;

    cout << "The facotorial of " << num << " is " << factorial(num);

    return 0;
}

