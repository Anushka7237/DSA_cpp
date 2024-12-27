#include <iostream>
using namespace std;

// Recursive function for linear search
int linearSearch(int arr[], int size, int target, int index) {
    // Base case: if index is out of bounds
    if (index >= size) {
        return -1; // Element not found
    }
    // If the current element matches the target
    if (arr[index] == target) {
        return index; // Return the index if found
    }
    // Recur for the next index
    return linearSearch(arr, size, target, index + 1);
}

// Main function
int main() {
    int arr[10],i,n,target; 
    cout<<"Adarsh Singh Sengar"<<endl<<"CSDS"<<endl<<"2-A"<<endl;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter target"<<endl;
    cin>>target;
    cout<<"By linear searching(recursive method)"<<endl;
    int result = linearSearch(arr, n, target, 0); // Start from index 0

    if (result != -1) {
        cout<<"element "<<target<<" found at "<<result<<endl;
    } else {
        cout<<"element "<<target<<"  not found "<<endl;
    }

    return 0;
}
