#include <bits/stdc++.h>
using namespace std;

void print28(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // char ch = 'a' + (i - 1);
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
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
        print28(n);
    }
}