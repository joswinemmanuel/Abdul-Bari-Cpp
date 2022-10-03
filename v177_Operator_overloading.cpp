#include <bits/stdc++.h>
using namespace std;

class Complex {
    public:
        int real;
        int imaginary;

        Complex operator+(Complex c);        
};

Complex Complex::operator+(Complex c) {
            Complex temp;
            temp.real = this->real + c.real;
            temp.imaginary = this->imaginary + c.imaginary;
            return temp;
        }

int main() {
    Complex c1, c2, c3;
    c1.real = 5;
    c1.imaginary = 10;
    c2.real = 10;
    c2.imaginary = 5;
    c3 = c1 + c2;
    cout << "c3 = " << c3.real << "i + " << c3.imaginary << "\n";
}

// c3 = 15i + 15