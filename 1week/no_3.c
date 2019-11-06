#include <stdio.h>
#include <stdlib.h>
void main() {
	int x;
	int y;
	int sum;
	printf("첫 번째 숫자를 입력하세요\nx=");
	scanf_s("%d", &x);
	printf("두번째 숫자를 입력하세요\ny=");
	scanf_s("%d", &y);
	sum = x + y;
	printf("두 수의 합\nsum=%d\n", sum);
	system("pause");
}