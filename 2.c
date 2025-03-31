#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void exam1();

void main() {
	exam1();
 }

void exam1()
{
	int jumsu[2][4] = { {90, 85, 70,},
						{88, 99, 98}
	};
	jumsu[0][1] = 88;

	printf("점수변경 : ");
	scanf("%d", &jumsu[1][2]);
	int sum = 0;

	/*for (int i = 0; i < 3; i++) {
		jumsu[0][3] = jumsu[0][3] + jumsu[0][i];
	}*/

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			jumsu[j][3] = jumsu[j][3] + jumsu[j][i];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%4d  ", jumsu[i][j]);
		}
		printf("\n");
	}
}