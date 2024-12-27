#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,a1,a2,a3;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    cout << "enter size of 1st vector" << endl;
    cin >> a1;
    cout << "enter size of 2nd vector" << endl;
    cin >> a2;
    cout << "enter size of 3rd vector" << endl;
    cin >> a3;
    cout<<"enter vector elements"<<endl;
    for (i = 0; i < a1; i++)
    {
        cin >> n;
        arr1.push_back(n);
    }
    cout<<"enter 2nd vector elements"<<endl;
    for(i=0;i<a2;i++)
    {
        cin>>n;
        arr2.push_back(n);
    }
    cout<<"enter 3rd vector elements"<<endl;
    for(i=0;i<a3;i++)
    {
        cin>>n;
        arr3.push_back(n);
    }
    arr1.pop_back();
    cout<<"it will print vector 1st elements"<<endl;
    for(i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}