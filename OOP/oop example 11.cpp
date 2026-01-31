#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
private:
    int roll_no;
    string name;

public:
    // Member function to set data values
    void set_data(int r_no, const string& n) {
        roll_no = r_no;
        name = n;
    }

    // Member function to print the object details
    void print() {
        cout << "Roll No: " << roll_no << ", Name: " << name << " (Object Address: " << this << ")" << endl;
    }
};

int main() {
    // Creating three objects of pntr_obj
    pntr_obj obj1, obj2, obj3;

    // Setting data for each object
    obj1.set_data(1, "Alice");
    obj2.set_data(2, "Bob");
    obj3.set_data(3, "Charlie");

    // Printing the details of each object
    cout << "Details of Object 1:" << endl;
    obj1.print();

    cout << "Details of Object 2:" << endl;
    obj2.print();

    cout << "Details of Object 3:" << endl;
    obj3.print();

    return 0;
}