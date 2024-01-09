#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N)
{

    // Base Condition.
    if (N <= 1)
    {
        return N;
    }

    // Problem broken down into 2 functional calls
    // and their results combined and returned.
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);

    return last + slast;
}

int main()
{

    // Here, let’s take the value of N
    int N;
    cout << "Enter the number for which you want fibonacci th term" << endl;
    cin >> N;
    cout << fibonacci(N) << endl;
    return 0;
}