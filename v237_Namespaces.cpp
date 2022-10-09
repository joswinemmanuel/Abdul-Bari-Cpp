#include <bits/stdc++.h>
using namespace std;

namespace First {
    void fun() {
        cout << "FIRST FUN" << "\n";
    }
}

namespace Second {
    void fun() {
        cout << "SECOND FUN" << "\n";
    }
}

int main() {
    First::fun();
    Second::fun();
}

/*
FIRST FUN
SECOND FUN
*/