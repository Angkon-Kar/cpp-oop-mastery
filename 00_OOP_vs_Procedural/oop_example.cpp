#include <iostream>
#include <string>
#include <vector>
using namespace std;

// OOP Approach: Data and behavior are bundled together.
// The internal state is protected, and the object manages its own logic.

class Employee {
private:
    int id;
    string name;
    double baseSalary;
    double bonus;

public:
    // Constructor to initialize state safely
    Employee(int empId, string empName, double salary, double empBonus)
        : id(empId), name(move(empName)), baseSalary(salary), bonus(empBonus) {}

    // Behavior is intrinsic to the object
    [[nodiscard]] double calculateTotalCompensation() const {
        return baseSalary + bonus;
    }

    void printDetails() const {
        cout << "ID: " << id 
                  << " | Name: " << name 
                  << " | Total Comp: $" << calculateTotalCompensation() << '\n';
    }
};

class PayrollSystem {
private:
    vector<Employee> employees;

public:
    void addEmployee(const Employee& emp) {
        employees.push_back(emp);
    }

    void process() const {
        cout << "--- Processing Payroll (OOP) ---\n";
        for (const auto& emp : employees) {
            emp.printDetails();
        }
    }
};

int main() {
    PayrollSystem payroll;
    payroll.addEmployee(Employee(101, "Alice Smith", 75000.0, 5000.0));
    payroll.addEmployee(Employee(102, "Bob Jones", 62000.0, 3000.0));

    payroll.process();

    return 0;
}

/* Expected Output:
--- Processing Payroll (OOP) ---
ID: 101 | Name: Alice Smith | Total Comp: $80000
ID: 102 | Name: Bob Jones | Total Comp: $65000
*/
