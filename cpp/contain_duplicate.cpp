#include<iostream>
using namespace std;
bool containsDuplicate(int* nums, int numsSize) 
{
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j=1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i,n,nums[10];
    int y;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    y=containsDuplicate(nums,n);
    cout<<y<<endl;
    return 0;
}