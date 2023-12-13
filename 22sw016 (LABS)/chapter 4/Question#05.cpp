#include<iostream>
using namespace std;
struct Date {
    int days;
    int months;
    int years;
};
int main() {
    Date date1;
    cout << "Enter the day of the date " << endl;
    cin >> date1.days;
    while (date1.days > 31) {
        cout << "The days can't be more than 31" << endl;
        cout << "Enter the day of the date " << endl;
        cin >> date1.days;
        }
    cout << "Enter the month of the date " << endl;
    cin >> date1.months;
    while (date1.months > 12) {
        cout << "The month can't be more than 12" << endl;
        cout << "Enter the month of the date " << endl;
        cin >> date1.months;
    }
    cout << "Enter the year of the date " << endl;
    cin >> date1.years;
    cout << "The date is " << date1.days << "/" << date1.months << "/" << date1.years<<endl;
    date1.months++;
    date1.days+15;
    if (date1.months == 12) {
        date1.months = 1;
        date1.years++;
    }
    if (date1.days==27) {
        date1.days = 10;
    }
    if (date1.days == 28) {
        date1.days =11;
    }
    if (date1.days == 29) {
        date1.days = 12;
    }
    if (date1.days == 30) {
        date1.days = 13;
    }
    if (date1.days == 31) {
        date1.days = 14;
    }
    
    
    return 0;
}

