#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

vector<ull> cell_no(ull n)
{
    vector<ull> res(2, 0);
    ull sr = ceil(sqrt(n));

    if (1 == sr % 2)
    {
        cerr << "Odd\n";
        if (sr * sr == n)
        {
            cerr << "Perfect sruare\n";
            res[0] = 1;
            res[1] = sr;
        }
        else
        { // calculate distance from leading diagonal
            ull m_diag = sr * (sr - 1) + 1;
            if (n < m_diag)
            {
                cerr << "Large Diagonal:\nn: " << n << "    sr: " << sr << "    m_diag: " << m_diag << endl;
                res[0] = sr;
                res[1] = sr - (m_diag - n);
            }
            else
            {
                cerr << "Small Diagonal:\nn: " << n << "    sr: " << sr << "    m_diag: " << m_diag << endl;
                res[0] = sr - (n - m_diag);
                res[1] = sr;
            }
        }
    }
    else
    {
        cerr << "Even\n";
        if (n == sr * sr)
        {
            cerr << "Perfect sruare\n";
            res[0] = sr;
            res[1] = 1;
        }
        else
        {
            ull m_diag = sr * (sr - 1) + 1;
            if (n < m_diag)
            {
                cerr << "Small Diagonal:\nn: " << n << "    sr: " << sr << "    m_diag: " << m_diag << endl;
                res[0] = sr - (m_diag - n);
                res[1] = sr;
            }
            else
            {
                cerr << "Large Diagonal:\nn: " << n << "    sr: " << sr << "    m_diag: " << m_diag << endl;
                res[0] = sr;
                res[1] = sr - (n - m_diag);
            }
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ull t, n;
    cin >> t;
    for (ull i = 1; i <= t; i++)
    {
        cin >> n;
        cerr << "Input: " << n << endl;
        vector<ull> ans = cell_no(n);
        cout << "Case " << i << ": " << ans[0] << " " << ans[1] << endl;
        cerr << "Case " << i << ": " << ans[0] << " " << ans[1] << endl
             << endl;
    }
    return 0;
}
