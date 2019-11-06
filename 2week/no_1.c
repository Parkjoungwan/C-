#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	//3x^3-7x^2+9를 실행하는 프로그램.
	printf("x의 값을 입력하시오.");
	double x;
	scanf("%lf", &x);
	double RS;
	RS = 3 * x*x*x - 7*x*x + 9; //산술연산시 우선순위가 적용된다.
	printf("다항식의 값은 %.3lf입니다.\n", RS);

	system("pause");*/
	int x = 1;
	printf("3+2의 값은 %d\n", 3 + 2);
	printf("3-2의 값은 %d\n", 3 - 2);

	printf("x의 값은 %d\n",x);
	printf("x+1의 값은 %d\n", x+1);
	printf("x++의 값은 %d\n", x++);
	printf("++x의 값은 %d\n", ++x);

	system("pause");

	int a, b, result;
	printf("두개의 정수를 입력");
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