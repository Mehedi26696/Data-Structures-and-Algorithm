// pointer arithmatic
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}