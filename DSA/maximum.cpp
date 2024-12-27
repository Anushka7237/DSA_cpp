#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1, 254, 35, 31};
    auto max_iter = max_element(arr.begin(), arr.end());
    cout << *max_iter;
    return 0;
}