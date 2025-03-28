#include <bits/stdc++.h>
using namespace std;

vector<int> dp(20, 0);

vector<int> problemsStored(int n)
{
    vector<int> res(2, 0);
    if (n <= 10 && n > 0)
        res[1] = dp[n], res[0] = n - dp[n];
    else if (n > 10)
        res[0] = 10, res[1] = n - 10;
    dp[n]++;
    return res;
}

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int n;
        scanf("%d", &n);

        vector<int> ans = problemsStored(n);
        printf("%d %d\n", ans[0], ans[1]);
    }
    return 0;
}
