// find union and intersection of two sorted arrays

#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> first={1,2,2,3,4,5,6,7};
    vector<int> second={1,2,3,4,4,5,6,7,9,10};

    stack<int> s;
    int i=0;
    int j=0;
    int total=first.size()+second.size();
    while(i<first.size() || j<second.size())
    {
        if(first[i]<second[j])
        {
            if(s.top()!=first[i])
            {
                
                s.push(first[i]);
            }
            i++;
        }else if(first[i]>second[j])
        {
            if(s.top()!=second[j])
            {
                s.push(second[j]);
            }
            j++;
        }else if(first[i]==second[j])
        {
            s.push(first[i]);
            i++;
            j++;
        }
    }

    while(s.size()>0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}
