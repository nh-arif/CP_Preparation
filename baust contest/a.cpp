#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string D, ans;
    unordered_map<char, char> d;
    d['N'] = 'S';
    d['S'] = 'N';
    d['E'] = 'W';
    d['W'] = 'E';
    cin >> D;
    for (int i = 0; i < D.length(); i++)
    {
        ans += d[D[i]];
    }

    cout << ans << endl;

    return 0;
}