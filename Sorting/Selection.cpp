#include <bits/stdc++.h>
using namespace std;
// Defining function for selection sort
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements for given array" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}