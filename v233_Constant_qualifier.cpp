#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    int x = 10;
    x++;
    cout << x << "\n";
    11, will be the output
    */

    /*
    const int x = 10;                 // constant identifier
    x++;
    we cannot modify x, as it is a constant
    */

    /*
    const int x = 10;
    int const x = 10;
    both are same;
    */
    
    /*similar to
    #define x 10
    it is a perprocessor derviate, and is performed before compilation
    const int x = 10
    it is a constant identifier
    */

    // constant pointers

    /*
    const int x = 10;
    int *ptr = &x;
    we cannot point a pointer to a constant identifier
    */

    /*
    const int x = 10;
    const int *ptr = &x;
    we can do it
    */

    /*
    int x = 10;
    int *ptr = &x;
    ++*ptr;
    cout << x << " " << *ptr << "\n";
    // 11 11 - Output
    */

    /*
    int x = 10;
    const int *ptr = &x;
    ++*ptr;
    // will give an error, as we cannot modify a
    // pointer to a constant integer
    cout << *ptr;
    // we can access or read x, output - 10
    int y = 20;
    ptr = &y
    // we can point ptr to any other integer variable
    */

    /*
    const int *ptr = &x;
    int const *ptr = &x;
    are both same
    */
    
    /*
    int x = 10;
    int * const ptr = &x;       // constant pointer pointing an integer
    int y = 20;
    ptr = &y;
    //not possible, as ptr is a constant in this case
    ++*ptr;
    cout << *ptr;
    //modifying is possible, 11 is output
    // pointer is not pointing a constant interger
    */

    /*
    int x = 10;
    const int * const ptr = &x;  // constant pointer pointing a constant integer
    cout << *ptr;
    // 10 - we can access and read it
    ++*ptr;
    // we cannot modify a constant pointer
    int y = 20;
    ptr = &y;
    // not possible, as ptr is a constant
    */

    

}