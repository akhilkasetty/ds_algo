// move all negative elements to one side

#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,2,-5,-6,7,0,-10,11};
    int n=sizeof(a)/sizeof(a[0]);
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<high)
    {
        if(a[mid]<0)
        {
            swap(a[low],a[mid]);
            low++;
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

