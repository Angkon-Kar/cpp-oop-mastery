#include <iostream>
#include <string>
#include <vector>

// Procedural Approach: Data is separate from the functions that operate on it.
// If the data structure changes, all these functions must be updated.

struct EmployeeRecord {
    int id;
    std::string name;
    double baseSalary;
    double bonus;
};

// Global-like operations acting blindly on raw structs
double calculateTotalCompensation(const EmployeeRecord& emp) {
    return emp.baseSalary + emp.bonus;
}

void printEmployeeDetails(const EmployeeRecord& emp) {
    std::cout << "ID: " << emp.id 
              << " | Name: " << emp.name 
              << " | Total Comp: $" << calculateTotalCompensation(emp) << '\n';
}

void processPayroll(const std::vector<EmployeeRecord>& employees) {
    std::cout << "--- Processing Payroll (Procedural) ---\n";
    for (const auto& emp : employees) {
        printEmployeeDetails(emp);
    }
}

int main() {
    std::vector<EmployeeRecord> companyDB = {
        {101, "Alice Smith", 75000.0, 5000.0},
        {102, "Bob Jones", 62000.0, 3000.0}
    };

    processPayroll(companyDB);

    return 0;
}

/* Expected Output:
--- Processing Payroll (Procedural) ---
ID: 101 | Name: Alice Smith | Total Comp: $80000
ID: 102 | Name: Bob Jones | Total Comp: $65000
*/
