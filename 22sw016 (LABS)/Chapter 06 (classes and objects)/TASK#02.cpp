//Q#2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
//toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
//track of the number of cars that have gone by, and of the total amount of money collected.
//Objects and Classes
//6
//OBJECTS AND CLASSES 259 07 3087 CH06 11/29/01 2:16 PM Page 259
//Model this tollbooth with a class called tollBooth. The two data items are a type
//unsigned int to hold the total number of cars, and a type double to hold the total amount
//of money collected. A constructor initializes both of these to 0. A member function called
//payingCar() increments the car total and adds 0.50 to the cash total. Another function,
//called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
//member function called display() displays the two totals. Make appropriate member
//functions const.
//Include a program to test this class. This program should allow the user to push one key
//to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
//cause the program to print out the total cars and total cash and then exit.

#include<iostream>
#include<conio.h>
class TollBooth {
private:
    unsigned int carCount;
    double cashTotal;
public:
    // Constructor
    TollBooth() : carCount(0), cashTotal(0.0) {}
    // Member functions
    void payingCar() {
        carCount++;
        cashTotal += 0.50;
    }
    void nopayCar() {
        carCount++;
    }
    void display() const {
        std::cout << "Total Cars: " << carCount << std::endl;
        std::cout << "Total Cash: $" << cashTotal << std::endl;
    }
};

int main() {
    TollBooth tollBooth;
    char input;
    std::cout << "Press 'p' for a paying car, 'n' for a non-paying car, and 'Esc' to exit." << std::endl;
    while (true) {
        input = _getch();
        if (input == 'p') {
            tollBooth.payingCar();
        } else if (input == 'n') {
            tollBooth.nopayCar();
        } else if (input == 27) { // Esc key
            break;
        }
    }
    tollBooth.display();
    return 0;
}
