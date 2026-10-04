#include <iostream>
#include <string>
using namespace std;

class Teacher{
// Access specifier: public, private, protected
public: 
    // Attributes/Properties
    string name;
    string dept;
    string subject;
    double salary;

    // Methods/ Member Functions
    void changeDept(string newDept){
        dept = newDept;
    }


    // Setters
    void setSalary(double newSalary){
        salary = newSalary;
    }
    // Getter
    double getSalary(){
        return salary;
    }

};

int main() {
    Teacher t1; // Create an object of the Teacher class
    Teacher t2; // Create another object of the Teacher class

    t1.name = "Angkon";
    t1.dept = "Computer Science";
    t1.subject = "DSA";
    t1.setSalary(4000);

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.getSalary() << endl;

    return 0;
}

/*
Output:
Angkon
Computer Science
DSA
4000
*/