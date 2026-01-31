#include<iostream>
#include<string>
using namespace std;
class abstract {
public:
	virtual void askforgraduation() = 0;
};

class student: abstract {
public:
	int rollno;
	int id;
	string name;

public:
	

	//student(student& obj) {
		//cout << "roll no :" << rollno << endl;}
	student(int arollno, int ID, string NAME) {
		rollno = arollno;
		id = ID;
		name = NAME;

	}
	void introduce() {
		cout << " roll no " << rollno << endl;
		cout << " id " << id << endl;
		cout << " name " << name << endl;
	}
	inline void setrollno(int ROLLNO);
	void askforgraduation() {
		cout << " you are graduated" << endl;
	}
	
};
		inline void student::setrollno(int ROLLNO) {
			rollno = ROLLNO;
		}
/*
student::student(student& obj) {
	rollno = obj.rollno;
}*/
int main() {
	
	student astudent = student(38, 1234, "hadia");
	astudent.setrollno(-1);
	astudent.introduce();
	astudent.askforgraduation();


	
}