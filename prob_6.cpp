// reverse an array


#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
