#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE // if ONLINE_JUDGE is not defined then below code will be executed
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string name;
    getline(cin, name);
    cout << "Hello, " << name;
    return 0;
}