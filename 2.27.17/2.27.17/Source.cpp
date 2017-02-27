#include <Windows.h>
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++)
		
	Beep(800+i*100, 200);

	for (int i = 10; i > 0; i--)

		Beep(800 + i * 100, 200);
}