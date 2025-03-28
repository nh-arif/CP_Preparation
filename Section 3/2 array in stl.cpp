#include <bits/stdc++.h>
using namespace std;

void checkSize(array<int, 5> xarr)
{
    cout << "Size in checkSize(): " << sizeof(xarr) << endl;
}

void print(array<int, 5> alias_arr)
{
    for (auto i : alias_arr)
    {
        // for each loot
        cout << i << " "; // prints 1 2 3 4 5
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    array<int, 5> arr = {1, 2, 3, 5, 4};
    cout << "Size in main(): " << sizeof(arr) << endl;
    checkSize(arr);
    sort(arr.begin(), arr.end()); // in-built sort function(algorithm) with iterator
    cout << "Address of the array: " << &arr << endl;
    print(arr);

    array<int, 5> new_arr;
    new_arr.fill(5); // fill the array with 5
    fill(new_arr.begin() + 2, new_arr.end(), 10);
    print(new_arr);
    return 0;
}