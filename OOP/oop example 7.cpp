#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    Box(double lv = 1.0, double bv = 1.0, double hv = 1.0) {
        cout << endl << "Constructor called." << endl;
        length = lv;
        breadth = bv;
        height = hv;
    }

    double Volume() {
        return length * breadth * height;
    }
};

int main(void) {
    Box Box1(78.0, 24.0, 18.0);
    Box Box2 = Box1;

    cout << endl
        << "Box1 volume = " << Box1.Volume() << endl
        << "Box2 volume = " << Box2.Volume() << endl;

    return 0;
} 