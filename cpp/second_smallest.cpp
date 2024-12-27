//Write a C++ program to find the second smallest elements in a given array of integers.
#include<iostream>
using namespace std;
int second_largest(int*arr,int n)
{
    int temp,i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
     int max=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        if(max==arr[i-1])
        continue;
        else
        {
            max=arr[i-1];
        return max;
        }

    }
}
int main()
{
    int i,y,arr[10],n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elemnents"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    y=second_largest(arr,n);
    cout<<"second largest element is "<<y<<endl;
    return 0;

}