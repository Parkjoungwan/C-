#include <stdio.h>
#include <stdlib.h>

int main( ) {
	printf("두개의 정수를 입력하시오:");
	int x, y;
	scanf("%d %d", &x, &y);

	//관계연산자
	printf("x==y의 결과값: %d\n", x == y);
	printf("x!=y의 결과값: %d\n", x != y);
	printf("x>y의 결과값: %d\n", x > y);
	printf("x<y의 결과값: %d\n", x < y);
	printf("x>=y의 결과값: %d\n", x >= y);
	printf("x<=y의 결과값: %d\n", x <= y);

	//논리연산자
	printf("%d && %d의 결과값: %d\n",x,y, x && y);
	printf("%d || %d의 결과값: %d\n", x, y, x || y);
	printf("!%d의 결과값: %d\n", x, !x);

	//조건연산자
	printf("(x>y)?x:y의 결과값 %d\n", (x > y) ? x : y);//큰 값 반환
	printf("(x<y)?x:y의 결과값 %d\n", (x < y) ? x : y);//작은 값 반환
	

	system("pause");
}