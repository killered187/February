#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void Monsters();
int main() {
	srand(time(NULL));
	while (true) {
		Monsters();
	}
	void Monsters() {
		int number = rand() % 6;
		switch (number) {
		case 1:
			cout << "a zombie appears!!" << endl;
			break;
		case 2:
			cout << "Boomer blinds you!!" << endl;
			break;
		case 3:
			cout << "a shapeshifter leads you the wrong way!!" << endl;
			break;
		case 4:
			cout << "a demon has possessed you!!" << endl;
			break;
		case 5:
			cout << "a witch strikes" << endl;
		}
	}