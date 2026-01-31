
#include "sirnabeel.h"
#include<iostream>
#include<string>


using namespace std;

int student::getmarks() {
	return marks;
}
char  student::assigngrade(char GRADE) {
	if (grade == 'D')                               
		cout << " you are not promoted " << endl;
	else
		cout << " you are promoted " << endl;
	return grade;
}
float student::getgpa() {
	return gpa;
}
char student::getgrades() {
	return grade;
}






