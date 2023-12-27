#include <bits/stdc++.h>
using namespace std;

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
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
        print7(n);
    }
}