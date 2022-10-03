#include <bits/stdc++.h>
using namespace std;

class Complex {
    public:
        int real;
        int imag;

        Complex(int real, int imag) {
            this->real = real;
            this->imag = imag;
        }

        friend ostream & operator<<(ostream &out, Complex &c);
};

ostream & operator<<(ostream &out, Complex &c) {
    out << c.real << "+i" << c.imag << "\n";
    return out;
}

int main() {
    Complex c1(10, 20);
    cout << c1;
}