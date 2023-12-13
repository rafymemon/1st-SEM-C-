//. Create a class called time that has separate int member data for hours, minutes, and 
//seconds. One constructor should initialize this data to 0, and another should initialize it
//to fixed values. Another member function should display it, in 11:59:59 format. The final
//member function should add two objects of type time passed as arguments.
//A main() program should create two initialized time objects (should they be const?) and
//one that isn’t initialized. Then it should add the two initialized values together, leaving the
//result in the third time variable. Finally it should display the value of this third variable.
//Make appropriate member functions const.


#include<iostream>
using namespace std;
class Time {
   private:
        int hours;
        int minutes;
        int seconds;
   public:
        Time(){
        this->hours = 0;
        this->minutes = 0;
        this->seconds = 0;
};
Time(int hours, int minutes, int seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
};
int getHours(){
        return this->hours;
};
int getMinutes(){
        return this->minutes;
};
int getSeconds() {
        return this->seconds;
};
void display(){
    cout << hours << ":" << minutes << ":" << seconds << endl;
};
Time add(Time time1, Time time2) {
        int hoursAdd = time1.getHours() + time2.getHours();
if (hoursAdd > 23) {
        hoursAdd -= 24;
}
        int minutesAdd = time1.getMinutes() + time2.getMinutes();
if (minutesAdd > 59) {
        minutesAdd -= 60;
        hoursAdd += 1;
}
int secondsAdd = time1.getSeconds() + time2.getSeconds();
if (secondsAdd > 59) {
        secondsAdd -= 60;
        minutesAdd += 1;
}

        Time time3(hoursAdd, minutesAdd, secondsAdd);
        return time3;
};
};



int main() {
    Time time1(8, 20, 30);
    Time time2(13, 23, 43);
    Time time3;
    time3 = time3.add(time1, time2);
    time1.display();
    time2.display();
    time3.display();
return 0;
}
