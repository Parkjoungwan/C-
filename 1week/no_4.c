#include <stdio.h>
#include <stdlib.h>
void main() {
	int salary;
	
	printf("월급을 입력하시오:");
	scanf_s("%d", &salary);

	int deposit;

	deposit = 10 * 12 * salary;
	printf("10년동안 저축액: %d\n", deposit);
	system("pause");
}