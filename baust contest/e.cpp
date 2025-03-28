#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, ans = "NO";
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9' or s[i] == '+')
        {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}