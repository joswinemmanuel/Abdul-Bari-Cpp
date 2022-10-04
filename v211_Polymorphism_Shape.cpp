#include <bits/stdc++.h>
using namespace std;

class Shape {
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Rectangle: public Shape {
    private:
        float length;
        float breadth;
    public:
        Rectangle(float length, float breadth) {
            this->length = length;
            this->breadth = breadth;
        }
        
        float area() {return length * breadth;}
        float perimeter() {return 2 * (length + breadth);}
};

class Circle: public Shape {
    private:
        float radius;
    public:
        Circle(float radius) {
            this->radius = radius;
        }

        float area() {return (22/7.0) * radius * radius;}
        float perimeter() {return 2 * (22/7.0) * radius;}
};

int main() {
    Shape *s1 = new Rectangle(10, 5);
    cout << "Area of s1 " << s1->area() << " and Perimeter is " << s1->perimeter() << "\n";
    
    Shape *s2 = new Circle(5);
    cout << "Area of s2 " << s2->area() << " and Perimeter is " << s2->perimeter() << "\n";
}

// Area of s1 50 and Perimeter is 30
// Area of s2 78.5714 and Perimeter is 31.4286