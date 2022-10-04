#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=10, b=0;

    try {
        if(b == 0)
            throw 1;
        int c = a / b;
        cout << c << "\n";
    } catch(int e) {
        cout << "Division by zero, error code " << e << "\n";
    }
}

// Division by zero, error code 1