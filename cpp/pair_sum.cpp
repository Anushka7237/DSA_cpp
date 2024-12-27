#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,start=0,target,currentsum;
    vector<int>value={2,7,11,15};
    int end=value.size()-1;
    cout<<"enter target"<<endl;
    cin>>target;
    for(i=0;i<value.size();i++)
    {
        for(j=1;j<value.size();j++)
        {
            if(value[i]+value[j]==target)
            cout<<i<<" "<<j;
        }
    }
    cout<<endl;
    while(start<end)
    {
        currentsum=value[start]+value[end];
        if(currentsum==target){
        cout<<start<<" "<<end;
        break;
        }
        else if(currentsum>target)
        end--;
        else
        start++;
    }
    return 0;
}