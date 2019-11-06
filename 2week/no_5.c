#include <stdio.h>

int main() {
	//3자리 수를 입력받은 후 각각의 자리수를 분리하고 출력하는 프로그램.
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("백의 자리수:%d\n", num / 100);
	printf("십의 자리수:%d\n", num / 10 % 10);
	printf("일의 자리수:%d\n", num % 10);
	system("pause");
}