#include <iostream>
using namespace std;
int main() {
	int input;
	cout << "How Old Are You?" << endl;
	cin >> input;
	if (input % 2 == 0)
		cout << "even steven" << endl;
	else
		cout << "Oddball" << endl;

}