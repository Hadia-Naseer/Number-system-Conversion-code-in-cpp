#include<iostream>
using namespace std;
class box {
private:
	double length;
	double width;
	double height;
public:
	box(double LENGTH, double HEIGHT, double WIDTH) : length(LENGTH), height(HEIGHT), width(WIDTH) {};
	friend double  boxsurface(box abox);
	double volume() {
		return length * width * height;
	}

	
};
double boxsurface(box abox) {
	return 2.0 * (abox.length * abox.width + abox.length * abox.height + abox.width);
}

int main() {
	box volume(22, 56, 98);
	cout << "Surface area of the box: " << boxsurface(volume) << endl;

	return 0;
}