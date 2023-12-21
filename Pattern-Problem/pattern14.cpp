#include <bits/stdc++.h>
using namespace std;

void print14(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
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
        print14(n);
    }
}
