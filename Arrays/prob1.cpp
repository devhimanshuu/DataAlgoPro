// Largest element in an array

#include <bits/stdc++.h>

using namespace std;
int findLargestElement(int arr[], int n)
{

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{

    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr1[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int max = findLargestElement(arr1, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}
