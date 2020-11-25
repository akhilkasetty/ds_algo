// find largest sum contigious sum subbarrray 
// KADANES ALGORITHM

#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,0,-3,4,5,-6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int max_sum=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=max(sum+a[i],a[i]);
        max_sum=max(sum,max_sum);
    }
    cout<<max_sum;
    return 0;
}
