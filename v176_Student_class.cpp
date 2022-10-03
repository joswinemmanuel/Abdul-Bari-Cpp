#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Student {
    private:
        int roll;
        string name;
        float mark1, mark2, mark3;
    
    public:
        Student(int roll, string name, float mark1, float mark2, float mark3);
        float totalMark();
        char grade();
        string getName();
        int getRoll() {return roll;}
};

Student::Student(int roll, string name, float mark1, float mark2, float mark3) {
    this->roll = roll;
    this->name = name;
    this->mark1 = mark1;
    this->mark2 = mark2;
    this->mark3 = mark3;
}

float Student::totalMark() {
    return mark1 + mark2 + mark3;
}

char Student::grade() {
    float avg = this->totalMark() / 3;
    if(avg > 60)
        return 'A';
    else if(avg >=40 && avg <=60)
        return 'B';
    else
        return 'C';
}

string Student::getName() {
    return name;
}

int main() {
    Student s1(1, "Joswin", 99, 100, 99);
    cout << "Name : " << s1.getName() << "\n";
    cout << "Roll : " << s1.getRoll() << "\n";
    cout << "Total Marks : " << s1.totalMark() << "\n";
    cout << "Grade : " << s1.grade();
}

// Name : Joswin
// Roll : 1
// Total Marks : 298
// Grade : A