#include<iostream>
#include<limits.h>  
using namespace std;
void total_trapping_rainwater(int*heights,int n)
{
    int left_max[1000],i,totalwatertrap=0,watertrap;
    int right_max[100];
    left_max[0]=heights[0];
    for(i=1;i<n;i++)
    {
        left_max[i]=max(left_max[i-1],heights[i-1]);
        cout<<left_max[i]<<",";
    }
     right_max[n-1]=heights[n-1];
    cout<<endl;
    for(i=n-2;i>=0;i--)
    {
        right_max[i]=max(right_max[i+1],heights[i+1]);
        cout<<right_max[i]<<",";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        watertrap=min(right_max[i],left_max[i])-heights[i];
        if(watertrap>0)
       totalwatertrap+=watertrap;
    }
    cout<<endl;
    cout<<"total rainwater trapped is "<<totalwatertrap<<endl;
}
int main()
{
    int heights[7]={4,2,0,6,3,2,5};
    int n = sizeof(heights) / sizeof(int);
    total_trapping_rainwater(heights,n);
    return 0;
}