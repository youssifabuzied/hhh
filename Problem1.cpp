#include <iostream>
#include <string>
using namespace std;
int main() {
	int height;
	string gender;
	string pregnance;
	cout << "Please enter your height in inches: ";
	cin >> height;
	if (height > 48) {
		cout << "Please indicate your gender: ";
		cin >> gender;
		if (gender == "female") {
			cout << "Are you pregnant?";
			cin >> pregnance;
			if (pregnance == "no") {
				cout << "OK: have fun!";
			}
			else {
				cout<<"Sorry";
			}
		}
		else if(gender == "male") {
			cout << "OK: have fun!";
		}
		else {
			cout<<"No valid answer";
		}
	}
	else {
		cout << "Sorry";
	}
}