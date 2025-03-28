#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int mod = 10000007;
vector<ll> dp(10001, -1);

ll fn(int n)
{
    if (dp[n] == -1)
    {
        dp[n] = 0;
        for (int i = 1; i <= 6; i++)
        {
            dp[n] += fn(n - i);
            dp[n] %= mod;
        }
    }
    return dp[n] % mod;
}
int main()
{
    int n, t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cin >> dp[0] >> dp[1] >> dp[2] >> dp[3] >> dp[4] >> dp[5] >> n;
        cout << "Case " << i << ": " << fn(n) << endl;
        dp = vector<ll>(10001, -1);
        ;
    }
    return 0;
}