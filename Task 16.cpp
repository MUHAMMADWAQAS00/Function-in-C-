#include <iostream>
using namespace std;

class MyClass {
private:
    static int objectCount; // Static variable to keep track of objects

public:
    // Constructor increments the counter when an object is created
    MyClass() {
        objectCount++;
    }

    // Static function to get the count of objects
    static int getObjectCount() {
        return objectCount;
    }
};

// Initialize the static variable
int MyClass::objectCount = 0;

int main() {
    MyClass obj1, obj2; // Two objects created

    cout << "Number of objects created: " << MyClass::getObjectCount() << endl;

    MyClass obj3; // Another object created

    cout << "Number of objects created: " << MyClass::getObjectCount() << endl;

    return 0;
}

