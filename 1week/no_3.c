#include <stdio.h>
#include <stdlib.h>
void main() {
	int x;
	int y;
	int sum;
	printf("ù ��° ���ڸ� �Է��ϼ���\nx=");
	scanf_s("%d", &x);
	printf("�ι�° ���ڸ� �Է��ϼ���\ny=");
	scanf_s("%d", &y);
	sum = x + y;
	printf("�� ���� ��\nsum=%d\n", sum);
	system("pause");
}