// Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
//Member data is the fraction’s numerator and denominator. Member functions should
//accept input from the user in the form 3/5, and output the fraction’s value in the same
//format. Another member function should add two fraction values. Write a main() program
//that allows the user to repeatedly input two fractions and then displays their sum. After
//each operation, ask whether the user wants to continue.


#include <iostream>
class Fraction {
public:
    void read() {
        char slash;
        std::cin >> numerator >> slash >> denominator;
    }
    void print() const {
        std::cout << numerator << '/' << denominator;
    }
    Fraction add(const Fraction& other) const {
        Fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }
private:
    int numerator;
    int denominator;
};
int main() {
    Fraction fraction1, fraction2, fractionSum;
    char continueChoice;
    do {
        std::cout << "Enter the first fraction: ";
        fraction1.read();
        std::cout << "Enter the second fraction: ";
        fraction2.read();
        fractionSum = fraction1.add(fraction2);
        std::cout << "The sum of the two fractions is: ";
        fractionSum.print();
        std::cout << std::endl;
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');
    return 0;
}
