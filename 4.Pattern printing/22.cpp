/*
1 2 3 4
1 2 3
1 2
1


*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r + 1 - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}