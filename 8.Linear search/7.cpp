// find whether array has duplicate or not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                
            }
        }
    }
    if (flag == true)
    {
        cout << "Have Diplicate";
    }
    else
    {
        cout << "No Duplicate";
    }

    return 0;
}