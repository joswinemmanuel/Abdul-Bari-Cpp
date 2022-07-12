#include <iostream>
using namespace std;

int main(){
    int a=10, b=3;
    float c;
    c = (float)a / b;
    cout << c << endl;

    //We cannot perform % (mod) operator on float or double
    //Only on int or char
    
    return 0;
}