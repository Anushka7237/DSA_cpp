#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int n,i,arr[10],second,third;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n<3)
    cout<<"inavlid"<<endl;
    int first=second=third=INT_MIN;
    for(i=0;i<n;i++)
    {
        if (arr[i] > first) 
        {
            third = second; 
            second = first; 
            first = arr[i]; 
        }
        else if (arr[i] > second) 
        {
           third = second;
            second = arr[i]; 
        }
        else if (arr[i] > third) 
        {
            third = arr[i]; 
        }
    }
    cout<<"greater element is "<<first<<endl;
    cout<<"second greater element is "<<second<<endl;
    cout<<"third greater element is "<<third<<endl;
    return 0;
}