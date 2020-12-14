/*
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and D.
The second line contains N space-separated integers a1,a2,…,aN.
Output
For each test case, print a single line containing one integer ― the smallest required number of days.

Constraints
1≤T≤10
1≤N≤104
1≤D≤105
1≤ai≤100 for each valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79
Example Output
10
3
*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t; 
    while(t--)
    {
        int n,d; 
        cin>>n>>d;
        int risk=0;
        int non_risk=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp<=9 || temp>=80)
            {
                risk++;
            }
            else{
                non_risk++;
            }
        }             
        
        
        if(d==1)
        {
            cout<<n<<endl;
            continue;
        }
        
        int days=0;
        
        int days=ceil((double)risk/(double)d)+ceil((double)non_risk/(double)d);
        // for risk people
        /*int temp_risk=risk%2;
        if(risk%2==0)
        {
            days+=risk/2;
        }else{
            int temp1=risk/2;
            days+=temp1;
            days+=temp_risk;
        }

        int temp_nonrisk=non_risk%2;
        if(temp_nonrisk%2==0)
        {
            days+=non_risk/2;
        }else{
            int temp2=non_risk/2;
            days+=temp2;
            days+=temp_nonrisk;
        }*/

        cout<<days<<endl;
    }
    return 0;
}