// find duplicate in an array of size n+1
// THIS QUESTION IS SOLVED USING SWAP SORT MOST EFFECIENT APPROACH FOR MISSING AND DUPLICATE NUMBER BOTH

#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int a[]={1,1,2,3,4,5,6,4};
    n=sizeof(a)/sizeof(a[0]);
    int i=0;
    while(i<n)
    {
        if(a[i]!=a[a[i]-1])
        {
            swap(a[i],a[a[i]-1]);
        }else{
            i++;
        }
    }

    vector<int> missing;
    vector<int> duplicates;

    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            missing.push_back(i+1);
            duplicates.push_back(a[i]);
        }
    }

    for(auto x:duplicates)
    {
        cout<<x<<endl;
    }
    return 0;
}
