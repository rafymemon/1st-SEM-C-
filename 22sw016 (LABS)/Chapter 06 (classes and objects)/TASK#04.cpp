//Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
//comprise an int for storing the employee number and a float for storing the employee’s
//compensation. Member functions should allow the user to enter this data and display it.
//Write a main() that allows the user to enter data for three employees and display it


#include <iostream>
using namespace std;
class Employee {
public:
  int employeeNumber;
  float employeeCompensation;
  void enterData() {
    cout << "Enter employee number: ";
    cin >> employeeNumber;
    cout << "Enter employee compensation: ";
    cin >> employeeCompensation;
  }
  void displayData() {
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Employee Compensation: " << employeeCompensation << endl;
  }
};
int main() {
  Employee employee1, employee2, employee3;
  cout << "Enter data for Employee 1:" << endl;
  employee1.enterData();
  cout << "Enter data for Employee 2:" << endl;
  employee2.enterData();
  cout << "Enter data for Employee 3:" << endl;
  employee3.enterData();
  cout << "\nEmployee Data:" << endl;
  employee1.displayData();
  employee2.displayData();
  employee3.displayData();
  return 0;
}
