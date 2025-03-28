## Types and macros

- **Type**:
  - `int` : 32-bit signed integer
  - `uint` : 32-bit unsigned integer
  - `float` : 32-bit floating point number
  - `bool` : boolean value (true or false)
  - `void` : no value (used for function return types)
- **Define**:
  - `#define` : define a macro (e.g., `#define PI 3
  - `#define ll long long int` : define a macro for a 64-bit integer type
  - `#define int long long int` : define a macro for a 64-bit integer type

#### Snippet for ll to use using int:

```cpp
#include <iostream>
using namespace std;

#define ll long long int

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n = 2e18;
    cout << n;
    return 0;
}

```

- **Macros**:

  - `MAX(a, b)` : returns the maximum of `a` and `b`
  - `MIN(a, b)` : returns the minimum of `a` and `b`
  - `ABS(a)` : returns the absolute value of `a`
  - `SQR(a)` : returns the square of `a`
  - `CUB(a)` : returns the cube of `a`

  - **Functions**:
    - `sin(a)` : returns the sine of `a` (in radians)
    - `cos(a)` : returns the cosine of `a` (in radians)
    - `tan(a)` : returns the tangent of `a` (in radians)
    - `sqrt(a)` : returns the square root of `a`
    - `pow(a, b)` : returns `a` raised to the power of `b
