#include<iostream>
#include<iomanip>
using namespace std;
class clockar {
	int minutes;
	int seconds;
	int hours;
public:
	clockar(int s, int m, int y) {
		setw(s);
		setw(m);
		setw(y);
		seconds = s;
		minutes = m;
		hours = y;


	}
	void display() {
		cout << setw(5) << seconds << ": " << setw(5) << minutes << ": " << setw(5) << hours << " AM " << endl;
	}
	int  tick() {
		hours++;
		if (hours == 12) {
			hours = 1;
		}
		else return hours;
		if (minutes == 60) {
			minutes = 0; 
		
		}
		else return minutes;
		if (seconds == 60) {
			seconds == 0;}
		else return seconds;

	}
	
};
int main() {
	clockar c(9, 34, 36);
	for (int i = 0; i <= 10; i++) {
		 c.tick();
		 c.display();
		 
	}


		return 0;
}