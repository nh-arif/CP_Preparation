#include <bits/stdc++.h>
using namespace std;

void checkSize(int arr[]) // pointer is passed
{
    cout << "Size in checkSize(): " << sizeof(arr) << endl; // pointer size prints here
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[] = {1, 2, 3, 4, 6, 5};
    cout << "Size in main(): " << sizeof(arr) << endl;
    checkSize(arr);
    sort(arr, (arr + sizeof(arr) / sizeof(arr[0])));
    cout << "Address of the array: " << arr << endl;
    for (auto i : arr)
    {
        cout << i << " "; // prints 1 2 3 4 5 6
    }
    return 0;
}