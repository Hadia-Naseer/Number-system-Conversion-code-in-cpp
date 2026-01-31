#include<iostream>
using namespace std;
class complexnumbers {  //first we declared a class of complexnumber 
	double real;         //data members 
	double imaginary;
public:

	complexnumbers(double REAL=0, double IMAGINARY=0) {  //constructor
		real = REAL;
		imaginary = IMAGINARY;
	}


	void display() {  //display function 
		cout << real << " + " << imaginary << endl; 


	}
	complexnumbers add(const complexnumbers &obj) const{   //copy constructor
		double realpart = real + obj.real;        //real number will be added to the real number
		double imaginarypart = imaginary + obj.imaginary;     // imaginary number will be added to imaginary number 
		return complexnumbers(realpart, imaginarypart);
		   // return type ke wo hmain realpart or imaginary part return kra ga 
	}
};
int main() {
	double real1, imaginary1, real2, imaginary2;   // input ke lia variables declare kia hain
	cout << " enter the complex  number " << endl;
	cin >> real1;
	cout << " enter imaginary number " << endl;
	cin >> imaginary1;
	cout << " enter second complex number " << endl;
	cin >> real2;
	cout << " enter another imaginary number " << endl;
	cin >> imaginary2;
	complexnumbers complex1(real1, imaginary1);     // copy constructor or us ke lia object bnaya ha 
	complexnumbers complex2(real2, imaginary2);// same kam idr b kia ha 
	complexnumbers results = complex1.add(complex2);    // copy constructor use kia ha add function  use kia ha 
	cout << " first complex number is " << endl;
	complex1.display();// har cheez ko display kr dia ha 
	cout << " second complex number is " << endl;
	complex2.display();// imaginary number ko b display kr dia ha 
	cout << " the sum of two complex number is " << endl;
	results.display();  // ab in ke results ko b display kr dia ha 
	return 0;
	
}