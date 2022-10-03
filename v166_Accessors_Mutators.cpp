#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int bredth;
    public:
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
    Rectangle r;
    r.set_length(100);
    r.set_bredth(50);

    cout << "length : " << r.get_length() << "\n";
    cout << "bredth : " << r.get_bredth() << "\n";
    cout << "area : " << r.area() << "\n";
    cout << "perimeter : " << r.perimeter() << "\n";
}

// length : 100
// bredth : 50
// area : 5000
// perimeter : 300