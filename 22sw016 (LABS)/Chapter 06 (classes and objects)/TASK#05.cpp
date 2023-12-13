// Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
//class. Its member data should consist of three ints: month, day, and year. It should also
//have two member functions: getdate(), which allows the user to enter a date in
//12/31/02 format, and showdate(), which displays the date.

#include <iostream>
class Date {
 private:
    int month;
    int day;
    int year;
 public:
    void getdate() {
        char slash;
        std::cout << "Enter a date in MM/DD/YY format: ";
        std::cin >> month >> slash >> day >> slash >> year;
    }
    void showdate() const {
        std::cout << "The date is: " << month << '/' << day << '/' << year << std::endl;
    }
};
int main() {
    Date date;
    date.getdate();
    date.showdate();
    return 0;
}
