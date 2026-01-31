#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;

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
    Box Box2;

    cout << endl
        << "Volume of Box2 = " << Box2.Volume();
    cout << endl;

    return 0;
}