#include <iostream>
using namespace std;

// Forward declaration of classes
class ClassB;

class ClassA {
private:
    int numberA;

public:
    // Function to set the value of numberA
    void setNumber(int num) {
        numberA = num;
    }

    // Friend function to find the maximum of two numbers
    friend int findMax(ClassA a, ClassB b);
};

class ClassB {
private:
    int numberB;

public:
    // Function to set the value of numberB
    void setNumber(int num) {
        numberB = num;
    }

    // Friend function to find the maximum of two numbers
    friend int findMax(ClassA a, ClassB b);
};

// Friend function definition
int findMax(ClassA a, ClassB b) {
    return (a.numberA > b.numberB) ? a.numberA : b.numberB;
}

int main() {
    ClassA objA;
    ClassB objB;

    // Set values for the objects
    objA.setNumber(10);
    objB.setNumber(20);

    // Find and display the maximum number
    int maxNumber = findMax(objA, objB);
    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}