#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);
	if (num % 2 == 0) printf("입력된 정수는 짝수\n");
	else printf("입력된 정수는 홀수\n");
	system("pause");
}	