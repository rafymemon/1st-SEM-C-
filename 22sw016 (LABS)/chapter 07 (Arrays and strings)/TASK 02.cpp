//2. Create a class called employee that contains a name (an object of class string) and an
//employee number (type long). Include a member function called getdata() to get data
//from the user for insertion into the object, and another function called putdata() to
//display the data. Assume the name has no embedded blanks.
//Write a main() program to exercise this class. It should create an array of type employee,
//and then invite the user to input data for up to 100 employees. Finally, it should print out
//the data for all the employees

#include <iostream>
#include <string>
class Employee {
public:
    void getdata();
    void putdata() const;
private:
    std::string name;
    long employee_number;
};
void Employee::getdata() {
    std::cout << "Enter employee name: ";
    std::cin >> name;
    std::cout << "Enter employee number: ";
    std::cin >> employee_number;
}
void Employee::putdata() const {
    std::cout << "Employee Name: " << name << std::endl;
    std::cout << "Employee Number: " << employee_number << std::endl;
}
int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int n;
    std::cout << "Enter the number of employees (up to 100): ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter data for employee " << i + 1 << std::endl;
        employees[i].getdata();
    }
    for (int i = 0; i < n; ++i) {
        std::cout << "Data for employee " << i + 1 << std::endl;
        employees[i].putdata();
    }
    return 0;
}
