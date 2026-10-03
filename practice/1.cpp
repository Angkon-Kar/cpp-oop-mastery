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
};

int main() {
    Teacher t1; // Create an object of the Teacher class
    Teacher t2; // Create another object of the Teacher class

    t1.name = "Angkon";
    t1.dept = "Computer Science";
    t1.subject = "DSA";
    t1.salary = 4000;

    cout << t1.name << endl;

    return 0;
}