// cyclically rotate array by 1 with constant space


#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    // rotate to right clockwise
    int n=sizeof(a)/sizeof(a[0]);
    int temp=a[n-1];
    for(int i=n-1;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
