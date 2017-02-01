#include <iostream>
using namespace std;
int main() {
	char input;
		cout << "Do you like the Broncos?" << endl;
	cin >> input;
	if (input == 'y')
		cout << "Have a gold star!" << endl;
	else if (input == 'n')
		cout << "Change your life thoughts around!" << endl;
}