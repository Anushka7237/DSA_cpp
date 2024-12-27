#include <iostream>
using namespace std;
// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int target) {
    // Base case: if the range is invalid
    if (left > right) {
        return -1; // Element not found
    }
    int mid = left + (right - left) / 2; // Find the middle index
    // Check if the target is at mid
    if (arr[mid] == target) {
        return mid; // Return the index if found
    }
    // If the target is smaller than the mid, search the left half
    else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    }
    // If the target is larger than the mid, search the right half
    else {
        return binarySearch(arr, mid + 1, right, target);
    }
}
// Main function
int main() {
    int arr[10],i,n,target;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter target"<<endl;
    cin>>target;
    cout<<"By binary searching(recursive method)"<<endl;
    int result = binarySearch(arr, 0, n - 1, target); // Perform binary search

    if (result != -1) {
        cout<<"element "<<target<<" found at "<<result<<endl;
    } else {
        cout<<"element "<<target<<" not found at "<<endl;
    }

    return 0;
}
