#include <bits/stdc++.h>
using namespace std;

void print25(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        count++;
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
        print25(n);
    }
}