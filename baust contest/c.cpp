#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 1;
    char j, k = '$';
    cin >> t;
    string ans = "No";
    for (int i = 0; i < t; i++)
    {
        cin >> j;
        if (j == k)
        {
            count++;
            if (count == 3)
            {
                ans = "Yes";
                break;
            }
        }
        else
        {
            count = 1;
            k = j;
        }
    }
    cout << ans << endl;
    return 0;
}