#include<iostream>
using namespace std;
class student {
	public:
	int id;
	int rollno;
public:
	student(int ID, int ROLL) {
		id = ID;
		rollno = ROLL;

	}
	student(int roll) {
		rollno = roll;
		}
	void display() {
		cout << "id " << id << endl;
		cout << "roll no " << rollno << endl;
	}
};
int main() {
	student s1(15252, 8888);
	student s2 = s1;
	s2.id = 72728;
	s1.display();
	s2.display();
}