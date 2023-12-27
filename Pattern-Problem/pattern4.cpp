#include <bits/stdc++.h>
using namespace std;

void print4(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; t++)
    {
        int n;
        cin >> n;
        print4(n);
    }
}