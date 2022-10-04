#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Employee {
    private:
        int empId;
        string name;
    public:
        Employee(int empId, string name) {
            this->empId = empId;
            this->name = name;
        }
        int getEmpId() {return empId;}
        string getName() {return name;}
};

class FulltimeEmployee: public Employee {
    private:
        int salary;
    public:
        FulltimeEmployee(int empId, string name, int salary): Employee(empId, name) {
            this->salary = salary;
        }
        int getSalary() {return salary;}
};

class ParttimeEmployee: public Employee {
    private:
        int wage;
    public:
        ParttimeEmployee(int empId, string name, int wage): Employee(empId, name) {
            this->wage = wage;
        }
        int getWage() {return wage;}
};

int main() {
    Employee e1(10, "Bibin");
    cout << e1.getEmpId() << " " << e1.getName() << "\n";

    FulltimeEmployee e2(11, "Joswin", 250000);
    cout << "Salary of " << e2.getName() << " is $" << e2.getSalary() << "\n";

    ParttimeEmployee e3(12, "Alaina", 300000);
    cout << "Wage of " << e3.getName() << " is $" << e3.getWage();
}

/*
10 Bibin
Salary of Joswin is $250000
Wage of Alaina is $300000
*/