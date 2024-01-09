#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int arr[], int n)
{
    cout << "The reversed array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// Function to reverse array using recursion
void reverseArray(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the size of your Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of your array" << endl;
    for (int j = 0; j <= n - 1; j++)
    {
        cin >> arr[j];
    }
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}