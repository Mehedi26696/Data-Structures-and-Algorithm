//removing spaces from a sentence and replace it with @40

#include<bits/stdc++.h>
using namespace std;

string replace(string &str)
{
    string temp="";
    for (int i = 0; i <  str.length(); i++)
    {
         if (str[i]==' ')
         {
             temp.push_back('@');
             temp.push_back('4');
             temp.push_back('0');
         }
         else
         {
            temp.push_back(str[i]);
         }
         
         
    }
    return temp;
    
}
int main()
{
    string s;
    getline(cin,s);
    cout<<replace(s)<<endl;
    return 0;
}