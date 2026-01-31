#include<iostream>
using namespace std;
class car {
private:

	int wheel;
	int door;
	int cur_speed;
public:
	car(int WHEEL = 4, int  DOOR = 2, int CUR_SPEED = 0) {
		wheel = WHEEL;
		door = DOOR;
		cur_speed = CUR_SPEED;

	}
	void speed() {
		cur_speed += 5;
		cout << "car speed " << cur_speed;
	}
	void brake() {
		cur_speed -= 5;
		cout << "car speed" << cur_speed;
		
	}
	void display() {
		cout << "wheels of a car" << wheel << endl;
		cout << " doors of a car" << door << endl;
		cout << "speed of car :" << cur_speed << endl;

	}
};
int main(){
	car ferrari;
	ferrari.display();
	car hino (10, 4);
		ferrari.speed();
		cout << "applying brakes" << endl;
		ferrari.brake();
		hino.speed();
		hino.brake();
		//ferrari.display();
		return 0;
}