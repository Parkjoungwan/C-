#include <stdio.h>
#include <stdlib.h>
void main() {
	int salary;
	
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &salary);

	int deposit;

	deposit = 10 * 12 * salary;
	printf("10�⵿�� �����: %d\n", deposit);
	system("pause");
}