#include<iostream>
#include<string>
using namespace std;
class abstract {
	virtual void askforgraduation() = 0;
};
class grade: abstract {
protected:
	int semester;
	string courseid;
	string book;
public:

	//polymorphism
	virtual void work() {
		cout << " hadia is a student " << endl;
	}
	//constructor
	grade(int SEMESTER, string COURSEID, string BOOK) {
		semester = SEMESTER;
		courseid = COURSEID;
		book = BOOK;
	}
	grade(grade& k) {
		semester = k.semester;
		courseid = k.courseid;

		book = k.book;
	}
	//encapsulation
	void setsemester(int Semester) {
		semester = Semester;
	}
	int getsemester() {
		return semester;
	}
	void setcouseid(string CourseID) {
		courseid=  CourseID  ;
	}
	string getcourseid() {
		return courseid;
	}
	void setbook(string Book) {
		book =Book ;
	}
	string  getbook() {
		return book;
	}
	//inputfunction (cannot be used when there is a constructor)
	void input() {
		cout << " enter your semster , courseid and book respectively" << endl;
		cin >> semester;
		cin >> courseid;
		cin >> book;
	}
	//display function 
	void display() {
		cout << "your semester " << semester << endl;
		cout << "course id " << courseid << endl;
		cout << "book name " << book << endl;

	}
	void askforgraduation() {
		if (semester == 2) 
			cout << " you are fresher " << endl;
		

		else
			cout << " yes you are graduated " << endl;
	}

};
//inheritance
class library : public grade{
protected:
	string department;
public:
	library(int SEMESTER, string COURSEID, string BOOK, string  DEPARTMENT)
		:grade(SEMESTER, COURSEID, BOOK) {
		department = DEPARTMENT;
	}
	void output() {
		cout << "your department : " << department << endl;
	}
	 void work() override{
		cout << " hadia is a software developer " << endl;}
		};
class teacher:public library {
protected :
	float cgpa;
public:
	teacher(int SEMESTER, string COURSEID, string BOOK, string  DEPARTMENT, float CGPA)
		:library(SEMESTER, COURSEID, BOOK, DEPARTMENT) {
		cgpa = CGPA;
	}
	
	void quality() {
		cout << " hadia of " << semester << " semester took a book  " << book << " her cgpa is "<<cgpa  << endl;
	}
};
int main() {
	grade su (2, "programming ", "how to program");
	//grade sk(su );
	//su.setbook("oop it series ");
	//su.setsemester(8);
	//sk.display();


	teacher t (2, "programming ", "how to program", " artificial intelligence", 4.0);
	t.quality();
	library d (2, "programming ", "how to program", " artificial intelligence");
	d.output();
	d.work();
	su.askforgraduation();
	//grade* g = &d;
	//g->work();
}



	
	

