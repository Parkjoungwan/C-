#include <stdio.h>
#include <stdlib.h>

int main() {
	//사칙연산 예제
	int x = 1;
	printf("3+2의 값은 %d\n", 3 + 2);
	printf("3-2의 값은 %d\n", 3 - 2);

	printf("x의 값은 %d\n", x);
	printf("x+1의 값은 %d\n", x + 1);
	printf("x++의 값은 %d\n", x++);//사용된 후 값 변경
	printf("++x의 값은 %d\n", ++x)
		;//사용 전 값 변경


	system("pause");
	//두 번째.
	
	int a, b, result;
	printf("두개의 정수를 입력");
	scanf("%d %d", &a, &b);

	result = a + b;
	printf("%d + %d = %d\n",a,b,result);

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