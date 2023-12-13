
//In ocean navigation, locations are measured in degrees and minutes of latitude and longitude.
// Thus if youre lying off the mouth of Papeete Harbor in Tahiti, your location is 149
//degrees 34.8 minutes west longitude, and 17 degrees 31.5 minutes south latitude. This is
//Chapter 6 260
//07 3087 CH06 11/29/01 2:16 PM Page 260
//written as 149°34.8 W, 17°31.5 S. There are 60 minutes in a degree. (An older system
//also divided a minute into 60 seconds, but the modern approach is to use decimal minutes
//instead.) Longitude is measured from 0 to 180 degrees, east or west from Greenwich,
//England, to the international dateline in the Pacific. Latitude is measured from 0 to 90
//degrees, north or south from the equator to the poles.
//Create a class angle that includes three member variables: an int for degrees, a float
//for minutes, and a char for the direction letter (N, S, E, or W). This class can hold either
//a latitude variable or a longitude variable. Write one member function to obtain an angle
//value (in degrees and minutes) and a direction from the user, and a second to display the
//angle value in 179°59.9 E format. Also write a three-argument constructor. Write a
//main() program that displays an angle initialized with the constructor, and then, within a
//loop, allows the user to input any angle value, and then displays the value. You can use
//the hex character constant \xF8, which usually prints a degree (°) symbol.








#include <iostream>
#include <iomanip>
class Angle {
    int degrees;
    float minutes;
    char direction;
public:
    Angle(int d, float m, char dir): degrees(d), minutes(m), direction(dir) {}
    void getInput() {
        std::cout << "Enter angle (degrees, minutes, direction): ";
        std::cin >> degrees >> minutes >> direction;
    }
    void displayAngle() const {
        std::cout << degrees << "°" << std::fixed << std::setprecision(1) << minutes << " " << direction << std::endl;
    }
};
int main() {
    Angle angle(179, 59.9, 'E');
    angle.displayAngle();
    while (true) {
        angle.getInput();
        angle.displayAngle();
    }
    return 0;
}

