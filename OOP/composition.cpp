#include<iostream>
#include<string >
using namespace std;
class car {
private:
	int year;
	string company;
	string brand;
public:
	car(int YEAR, string COMPANY, string BRAND) {
		year = YEAR;
		company = COMPANY;
		brand = BRAND;
		
	}
	string getcompany() {
		return company;
	}
	string getbrand() {
		return brand;
	}
	int getyear() {
		return year;
	}
};
class mechanic {
	string name;
	string dob;
public:
	mechanic(string NAME, string DOB) {
		name = NAME;
		dob = DOB;

	}
	string getname() {
		return name;
	}
	string getdob(){
		return dob;
	}
};
class garage {
private:
	string name;
	string location;
public:
	car c; // this is composition that we are making object of one class in another class
	mechanic m;// this is another object  it means they have realtionship. if this  class doesnot exist , other class will not work
	garage(string NAME, string LOCATION, car CAR, mechanic MECHANIC)  //to define objects of different classes we have to write this syntax 
		: name(NAME), location(LOCATION), c(CAR), m(MECHANIC) {
		name = NAME;
		location = LOCATION;

	}
	string getlocation() {
		return location;
	}
	
	void print() {
		cout << "location of garage " << location << endl;
		cout << "name of garage " << name << endl;
		cout << "name of mechanic is " << m.getname() << endl;
		
	}
};
int main() {
	mechanic m("Alice", "December");
	car c(2024, "Kia", "Kia");
	garage g("Smith_motors ", "Kotli",c,m);

	g.print();
	return 0;
}