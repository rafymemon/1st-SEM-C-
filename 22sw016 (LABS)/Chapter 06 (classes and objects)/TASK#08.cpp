// Create a class that includes a data member that holds a “serial number” for each object
//created from the class. That is, the first object created will be numbered 1, the second 2,
//and so on.
//To do this, you’ll need another data member that records a count of how many objects
//have been created so far. (This member should apply to the class as a whole; not to 
//individual objects. What keyword specifies this?) Then, as each object is created, its 
//constructor can examine this count member variable to determine the appropriate serial
//number for the new object.
//Add a member function that permits an object to report its own serial number. Then
//write a main() program that creates three objects and queries each one about its serial
//number. They should respond I am object number 2, and so on.

#include <iostream>
class SerialNumberedObject {
public:
    SerialNumberedObject() {
        serial_number = ++object_count;
    }
    int get_serial_number() const {
        return serial_number;
    }
private:
    static int object_count;
    int serial_number;
};
int SerialNumberedObject::object_count = 0;
int main() {
    SerialNumberedObject obj1, obj2, obj3;
    std::cout << "I am object number " << obj1.get_serial_number() << std::endl;
    std::cout << "I am object number " << obj2.get_serial_number() << std::endl;
    std::cout << "I am object number " << obj3.get_serial_number() << std::endl;
    return 0;
}
