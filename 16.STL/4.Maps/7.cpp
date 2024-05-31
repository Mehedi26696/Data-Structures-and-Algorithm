//Given N strings and Q queries. In each query you are given a string you have to find frequency of this string

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    unordered_map<string,int>m;
    for (int i = 0; i <  n; i++)
    {
         string s;
         cin>>s;
         m[s]++;

    }
    int q;
    cin>>q;
    while (q--)
    {
         string s;
         cin>>s;
         cout<<m[s]<<endl;
    }
    
    
    return 0;
}