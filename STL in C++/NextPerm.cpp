/*next_permutation in STL is a built-in function which as the name suggests returns the next lexicographically greater permutation of the elements in the container passed to it as an argument.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec = {1, 3, 2};

    next_permutation(vec.begin(), vec.end());

    cout << vec[0] << " " << vec[1] << " " << vec[2];

    return 0;
}