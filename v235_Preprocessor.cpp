#include <bits/stdc++.h>
using namespace std;

#define PI 3.1425
#define c cout
#define SQRT(x) (x*x)
#define MAX(x, y) (x>y ? x : y)
#define MESSAGE(x) #x

#ifndef VAL
    #define VAL 100
#endif

#ifndef PI
    #define PI 3
#endif

int main() {
    // replacing the identifiers with the defined
    // value happens before compilation happens

    c << PI << "\n";
    // 3.1425
    c << SQRT(5) << "\n";
    // 25
    c << MAX(1, 5) << "\n";

    c << MESSAGE(HEY BROAH) << "\n";
    // HEY BROAH
    c << VAL << "\n";
    // 100
}