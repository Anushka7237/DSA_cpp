//Write a C++ program that asks the user to enter positive integers in order to process  
//maximum, minimum, and average or terminate the process with -1.
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,arr[10];
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //minimum
   int min_element=arr[0];
    for(i=1;i<n;i++)
    {
        if(min_element>arr[i])
        min_element=arr[i];
    }
    cout<<"minimum element of array is "<<min_element<<endl;
    //maximum
     int max_element=arr[0];
    for(i=1;i<n;i++)
    {
        if(max_element<arr[i])
        max_element=arr[i];
    }
    cout<<"maximum elements of array is "<<max_element<<endl;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"average of array is "<<sum/n<<endl;
    return 0;
}
