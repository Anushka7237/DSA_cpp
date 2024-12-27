#include<iostream>
#include<limits.h>  
using namespace std;
void max_profit(int*prices,int n)
{
    int best_buy[1000],i,profit;
    best_buy[0]=INT_MAX;
    for(i=1;i<n;i++)
    {
        best_buy[i]=min(best_buy[i-1],prices[i-1]);
        cout<<best_buy[i]<<",";
    }
    int maxprofit=0;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        profit=prices[i]-best_buy[i];
        maxprofit=max(maxprofit,profit);
    }
    cout<<"maximum profit is "<<maxprofit<<endl;
}
int main()
{
    int prices[6]={7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(int);
    max_profit(prices,n);
    return 0;
}