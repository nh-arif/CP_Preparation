#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int ans, a, b;
    char op;
    // cin >> a >> op >> b;
    // cout << a * b << endl;
    string s;
    cin >> s;
    a = (s[0] - '0');
    op = s[1];
    b = (s[2] - '0');

    switch (op)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case 'x':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    default:
        break;
    }

    cout << ans << endl;
    return 0;
}