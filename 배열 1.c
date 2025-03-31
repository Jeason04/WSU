#include<stdio.h>
#include <stdlib.h>
void exam1();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam2();


void main() {
	exam8();
}

void exam1() {
	int arr[10] = {0};
	for (int i = 0; i < 10; i++)
		printf("%2d", arr[i]);
	printf("\n");
	int arr1[10];
	for (int i = 0; i < 10; i++){
		arr1[i] = i+1;
		printf("%3d", arr1[i]);
	}
	printf("\n");
	char arr2[26];
	for (int i = 0; i < 26; i++) {
		arr2[i] = 'a' + i;
		printf("%2c", arr2[i]);
	}

	printf("\n");

	int arr3[3][4];
	int n = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr3[i][j] = n;
			n++;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%3d", arr3[i][j]);
		printf("\n");
	}
}

void exam3() {
	int arr[5];
	int i;
	float sum = 0;
	for (i = 0; i < 5; i++) {
		printf("%d 번째", i+1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum = sum + (float)arr[i];
	}

	printf("합계 : %.f", sum);
	printf("평균 : %.2f", sum / i);
}

void exam4() {
	char arr[40];
	int min = 0, big = 0, num = 0;
	gets(arr);
	for  (int i = 0; i < 40; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
			big++;
		else if (arr[i] >= 97 && arr[i] <= 122)
			min++;
		else if (arr[i] >= 48 && arr[i] <= 57)
			num++;
	}

	printf("소문자 %d\n대문자 %d\n숫자 %d\n", min, big, num);

}

void exam5() {
	int random;
	int arr1[10], arr2[10], arr3[20];
	for (int i = 0; i < 10; i++) {
		arr1[i] = rand() % 1000; 
		arr2[i] = rand() % 1000;
	}

	printf("난수 1 : ");
	for (int i = 0; i < 10; i++) {
		arr3[i] = arr1[i];
		printf("%5d", arr1[i]);
	}

	printf("\n");

	printf("난수 2 : ");
	for (int i = 10; i < 20; i++) {
		arr3[i] = arr2[i-10];
		printf("%5d", arr2[i-10]);
	}

	printf("\n");


	printf("병합 : ");
	for (int i = 0; i < 20; i++) {
		printf("%5d", arr3[i]);
	}
	printf("\n");

}

void exam6() {
	int arr[100];
	int num0=0, num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9=0;
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 9;
	}
	for (int i = 0; i < 100; i++) {
		switch (arr[i])
		{
		case 0:
			num0++;
			break;

		case 1:
			num1++;
			break;

		case 2:
			num2++;
			break;

		case 3:
			num3++;
			break;

		case 4:
			num4++;
			break;

		case 5:
			num5++;
			break;

		case 6:
			num6++;
			break;

		case 7:
			num7++;
			break;

		case 8:
			num8++;
			break;

		case 9:
			num9++;
			break;

		}
	}

	printf("숫자 0  1  2  3  4  5  6  7 8  9\n");
	printf("개수 %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d", num0, num1, num2, num3, num4, num5, num6, num7, num8, num9);
}

void exam7() {
	//크기가 100인 난수 배열이 있습니다.난수의 범위가 ‘A’ ~‘Z’ 까지 일 때, 각각의 문자가 나온 횟수를 출력하세요.출력방법은 14번과 같습니다.
	char arr[100];
	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J =0 , K= 0, L = 0, M = 0, N = 0, O= 0, P = 0, Q = 0, R = 0, S = 0, T= 0 , U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0;
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 90 + 65;
	}
	for (int i = 0; i < 100; i++) {
		switch (arr[i])
		{
		case 'A':
			A++;
			break;
		case 'B':
			B++;
			break;
		case 'C':
			C++;
			break;

		case 'D':
			D++;
			break;

		case 'E':
			E++;
			break;

		case 'F':
			F++;
			break;

		case 'G':
			G++;
			break;

		case 'H':
			H++;
			break;

		case 'I':
			I++;
			break;

		case 'J':
			J++;
			break;

		case 'K':
			K++;
			break;
		case 'L':
			L++;
			break;
		case 'M':
			M++;
			break;
		case 'N':
			N++;
			break;
		case 'O' :
			O++;
			break;

		case 'P':
			P++;
			break;
		case 'Q':
			Q++;
			break;
		case 'R':
			R++;
			break;
		case 'S':
			S++;
			break;
		case 'T':
			T++;
			break;
		case 'U':
			U++;
			break;
		case 'V':
			V++;
			break;
		case 'W':
			W++;
			break;
		case 'X':
			X++;
			break;
		case 'Y':
			Y++;
			break;
		case 'Z':
			Z++;
			break;
		}
	}
	printf("알파벳 A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z\n");
	printf("개수 %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d", A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z);
}
