#include <iostream>
using namespace std;

void printHimanshu(int n, int count)
{
    if (count <= 0)
    {
        return;
    }

    cout << "Himanshu" << endl;
    printHimanshu(n, count - 1);
}

int main()
{
    int repeat;
    cin >> repeat;
    printHimanshu(repeat, repeat);
    return 0;
}
