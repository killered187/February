#include <stdio.h>
int main() {
	char string[64];
	printf("what is your name?\n");
	fgets(string, 64, stdin);
	printf("hi,%s Your trash\n", string);
	return 0;
}
