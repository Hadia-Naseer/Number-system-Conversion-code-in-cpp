#include<iostream>
using namespace std;
class geometry {  
private:
	double  length;  // declaring variables
	double width;
	double squarearea() {     //functions for arethematic operations 
		return length * length;    //length square
	}
	double rectanglearea() {
		return length * width;     //length * width
	}
	double squareparameter() {     //for cube because it has 4 sides
		return 4* length ;
	}
	double rectangleparameter() {
		return 2 * (length + width);   //for parameters 
	}
public:
	
	double  squarefunction() {
		if (length == width) {    //conditional statement  for area
			return squarearea();
		}
		else {
			return rectanglearea();
			
		}
		}
	double parameterfunction() {
		if (length == width) {   //conditional statements for parameters 
			return squareparameter();

		}
		else
			return rectangleparameter();
	}
	void setDimensions(double l, double w) {
		length = l;     // else it will return garbage values 
		width = w;
	}
	

};
int main() {

	geometry gem;   //object formation 
	gem.setDimensions(22, 22);   //function calling 
	cout << " area of four sided geometric shape is " << gem.squarefunction() << endl; //this is for execution
	cout << " parameter of four sided geometric shape is " << gem.parameterfunction() << endl;
}
   