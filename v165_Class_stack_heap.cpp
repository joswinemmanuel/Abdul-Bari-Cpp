#include <bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int length;
    int bredth;

    float area(){
        return length * bredth;
    }

    float perimeter(){
        return 2 * (length + bredth);
    } 
};

int main(){
    Rectangle r1;
    r1.length = 10;
    r1.bredth = 5;
    cout << r1.area() << " " << r1.bredth << "\n";

    Rectangle *r2 = new Rectangle;
    r2->length = 100;
    r2->bredth = 50;
    cout << r2->area() << " " << r2->perimeter() << "\n";

    Rectangle *r3 = &r1;
    r3->length = 1000;
    r3->bredth = 500;
    cout << r3->area() << " " << r3->perimeter();
}

// 50 5
// 5000 300
// 500000 3000