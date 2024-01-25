#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the 6" << n << " elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // procompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Enter the number u want to find " << endl;
        cin >> num;

        // fetch
        cout << hash[num] << endl;
    }
}