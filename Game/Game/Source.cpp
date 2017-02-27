#include <iostream>
using namespace std;
int main() {
	char input = 'a';
	int room = 1;
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "You are in room 1, the living room! " << endl;
			cout << "You can go north (n)" << endl;
			cin >> input;
			if (input = 'n')
				room = 2;
			break;
		case 2:
			cout << "You are in Room 2, the kitchen" << endl;
			cout << "You can go east(e), south(s), or west(w)!" << endl;
			if (input == 'e')
				room = 4;
			if (input == 's')
				room = 1;
			if (input == 'w')
				room = 3;
			break;
		case 3:
			cout << "You are in room 3, the bedroom" << endl;
			cout << "You can go east(e), west(w), north(n), or south(s)" << endl;
			if (input == 'e')
				room = 5;
			if (input == 'w')
				room = 7;
			if (input == 'n')
				room = 8;
			if (input == 's')
				room = 2;
			break;
		case 4:
			cout << "You are in room 4, the basement!" << endl;
			cout << "You have been assassinated. Your spirit lies in the house and waits for the others." << endl;
			input = 'q';
		case 5:
				

		}
	}
}