#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int bredth;
    public:
        Rectangle() {
            length = 0;         // Non-parameterized constructor
            bredth = 0;
        }

        Rectangle(int l=0, int b=0) { // default arguments
            set_length(l);                  // parameterized constructor
            set_bredth(b);
        }

        Rectangle(Rectangle &rect) {
            length = rect.length;           // copy constructor
            bredth = rect.bredth;
        }  

        void set_length(int l) { 
            if(l >= 0)
                length = l;             // Mutator
            else {
                cout << "Length cannot be negative, set to default value 1\n";
                length = 1;
            }
        }

        void set_bredth(int b) {    // Mutator
            if(b >= 0)
                bredth = b;
            else {
                cout << "Bredth cannot be negative, set to default value 1\n";
                bredth = 1;
            }
        }

        float area() {
            return length * bredth;
        }

        float perimeter() {
            return 2 * (length + bredth);
        }

        int get_length() {
            return length;          // Acessor
        }

        int get_bredth() {          // Acessor
            return bredth;
        }
};

int main() {
    Rectangle r(100, 50);

    cout << "length : " << r.get_length() << "\n";
    cout << "bredth : " << r.get_bredth() << "\n";
    cout << "area : " << r.area() << "\n";
    cout << "perimeter : " << r.perimeter() << "\n";
}

// length : 100
// bredth : 50
// area : 5000
// perimeter : 300