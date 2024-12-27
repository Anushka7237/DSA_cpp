#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    //addition and subtraction of constants
    int *ptr1=arr;
    int *ptr2=arr+3;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    //increment and decrement pointer
    ptr1++;
    ptr2--;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    //addition and subtraction of two pointer
    int*ptr3=ptr2+1;
    cout<<ptr3<<endl;
    //comparison btw two pointer
    if(ptr1<ptr2)
    cout<<"anushka"<<endl;
    return 0;
} 
