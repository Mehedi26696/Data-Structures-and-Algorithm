/*
1
1 3
1 3 5
1 3 5 7
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j+=2)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}