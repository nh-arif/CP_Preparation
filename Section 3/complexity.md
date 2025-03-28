# Containers:

- ### Classical array in CPP:

  - `int arr[] = {1,2,3,4,5}`
  - working with pointer and base address
  - size of pointer is passed not of the array
  - so in function call it is always passed by reference
  - sorting `sort(arr, (arr + sizeof(arr) / sizeof(arr[0])))`

- ### STL array:

  - `array<int, 5> arr = {1,2,3,4,5}` - size must give here, i have use size 5 here
  - working with objects, call by value, so it is not passed by reference in function call
  - size of the array is passed, so no need to pass size separately
  - sorting `sort(arr.begin(), arr.end())`
  - `new_arr.fill(5)` - fill the array with 5
  - `fill(new_arr.begin() + 2, new_arr.end(), 10)` - fill with 10 from index 2 to end

- ### Vectors: Dynamic Array
  - `vector<int> arr = {1,2,3,4,5}`
  - `v.at(i)` or `v[i]` - get access of i'th element
  - `v.size` - get size of the vector
  - `v.front`, `v.back` - get first and last element
  - working with objects, call by value, so it is not passed by reference in function call
