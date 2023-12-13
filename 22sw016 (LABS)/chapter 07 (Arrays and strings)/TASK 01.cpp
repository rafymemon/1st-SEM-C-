//Write a function called reversit() that reverses a C-string (an array of char). Use a for
//loop that swaps the first and last characters, then the second and next-to-last characters,
//and so on. The string should be passed to reversit() as an argument.
//Write a program to exercise reversit(). The program should get a string from the user,
//call reversit(), and print out the result. Use an input method that allows embedded
//blanks. Test the program with Napoleon’s famous phrase, “Able was I ere I saw Elba.”

#include <iostream>
#include <cstring>
void reversit(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
int main() {
    const int MAX_SIZE = 256;
    char input[MAX_SIZE];
    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_SIZE);
    reversit(input);
    std::cout << "Reversed string: " << input << std::endl;
    return 0;
}
