
#include <iostream>

#define M_PI 3.142  

using namespace std;

class circle {
private:
    double radius;

public:
  
    circle(double RADIUS = 1) {
        radius = RADIUS;
    }

   
    double area() {
        return M_PI * radius * radius;
    }

    // Function to calculate circumference
    double perimeter() {
        return 2 * M_PI * radius;
    }

    // Destructor
    ~circle() {
        cout << "Circle with radius " << radius << " and area " << area() << " is deleted." << endl;
    }
};

int main() {
    circle circle1; // Default circle with radius 1
    double INPUT;

    cout << "Enter radius: ";
    cin >> INPUT;

    circle circle2(INPUT); // Circle with user-defined radius

    // Output area and circumference
    cout << "Area of circle 1: " << circle1.area() << endl;
    cout << "Circumference of circle 1: " << circle1.perimeter() << endl;
    cout << "Area of circle 2: " << circle2.area() << endl;
    cout << "Circumference of circle 2: " << circle2.perimeter() << endl;

    return 0;
}