#include <iostream>
using namespace std;
int main(){
	char input;
	cout << "What kind of cookie do you want?" << endl;
	cin >> input;

	switch (input) {
	    case 'c':
			cout << "You Got Chocolate!" << endl;
			break;
		case 'p':
			cout << "You Got Peanut Butter!" << endl;
			break;
		case 'r':
			cout << "You Got Raisin!" << endl;
			break;

	}
}