#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	//3x^3-7x^2+9�� �����ϴ� ���α׷�.
	printf("x�� ���� �Է��Ͻÿ�.");
	double x;
	scanf("%lf", &x);
	double RS;
	RS = 3 * x*x*x - 7*x*x + 9; //�������� �켱������ ����ȴ�.
	printf("���׽��� ���� %.3lf�Դϴ�.\n", RS);

	system("pause");*/
	int x = 1;
	printf("3+2�� ���� %d\n", 3 + 2);
	printf("3-2�� ���� %d\n", 3 - 2);

	printf("x�� ���� %d\n",x);
	printf("x+1�� ���� %d\n", x+1);
	printf("x++�� ���� %d\n", x++);
	printf("++x�� ���� %d\n", ++x);

	system("pause");

	int a, b, result;
	printf("�ΰ��� ������ �Է�");
	scanf("%d %d", &a,&b);

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);
	result = a - b;
	printf("%d - %d = %d\n", a, b, result);
	result = a * b;
	printf("%d * %d = %d\n", a, b, result);
	result = a / b;
	printf("%d / %d = %d\n", a, b, result);
	result = a % b;
	printf("%d %% %d = %d\n", a, b, result);
	system("pause");
}