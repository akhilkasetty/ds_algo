// find kth max and min element in an array

#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=6;
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    
    // for kth max_element
    priority_queue<int,vector<int>,greater<int>> min_heap;
    for(int i=0;i<n;i++)
    {
        min_heap.push(a[i]);
        if(min_heap.size()>k)
        {
            min_heap.pop();
        }
    }
    cout<<"kth max_element is="<<min_heap.top();

    // for kth min_element
    priority_queue<int> max_heap;
    for(int i=0;i<n;i++)
    {
        max_heap.push(a[i]);
        if(max_heap.size()>k)
        {
            max_heap.pop();
        }
    }

    cout<<"kth min_element is="<<max_heap.top();

    return 0;
}

