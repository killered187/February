#include <iostream>
using namespace std;
int main() {
	char input = 2;
	while (input != 17) {
		cout << "Would you like a cookie? press 17 to quit" << endl;
	cin >> input;
	if (input == 'y') {
		cout << "Here are your" << input << "cookies!" << endl;
	}
	else if (input == 'n') {
		cout << "no cookies for u" << endl;
	}
	else
		cout << "that isnt an answer" << endl;
  }
	
}