// sort 0's1's2's without sorting algorithm

#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,1,1,0,2,2,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    int low=0;
    int high=n-1;
    int mid=low+1;
    while(mid<high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }else if(a[mid]==1)
        {
            mid++;
        }else{
            swap(a[mid],a[high]);
            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
