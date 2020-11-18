// find maximum and minimum of the array


#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int maximum;
    int minimum;
    int n;
    int a[]={1,2,3,4,5,6};
    n=sizeof(a)/sizeof(a[0]);
    maximum=*max_element(a,a+n);
    minimum=*min_element(a,a+n);
    cout<<"max="<<maximum<<endl;
    cout<<"mini="<<minimum<<endl;

    return 0;
}
