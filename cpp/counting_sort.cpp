#include <iostream>
#include <limits>
#include <limits.h>
using namespace std;
void counting_sort(int arr[], int n)
{
    int min_value = INT_MAX;
    int freq[100] = {0};
    int i, j;
    int max_value = INT_MIN;
    for (i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        min_value = min(min_value, arr[i]);
        max_value = max(max_value, arr[i]);
    }
    for (i = min_value, j = 0; i <= max_value; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    cout << "sorted array after counting sort" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10], i, n;
    cout << "enter n" << endl;
    cin >> n;
    cout << "enter array elements" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    counting_sort(arr, n);
    return 0;
}