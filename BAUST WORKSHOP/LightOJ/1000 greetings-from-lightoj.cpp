#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", caseno, sum(a, b));
    }
    return 0;
}
