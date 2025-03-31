#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void exam5();
void main() {
	exam5();

}
void exam5() {
	int a = -10;
	int b = 0;

	int c = !a;
	int d = !b;

	printf("%c, %d\n", c, d);
}