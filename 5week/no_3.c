#include <stdio.h>

int main() {
	int*b;
	int a[] = { 1,2,3,4,5 };
	b = a;
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d]�� �ּҰ�: %u\n", i, &a[i]);
	}
	/*
	printf("%d", b);
	printf("%d", *b);
	printf("%d", b++);
	printf("%d", *(b)++);
	*/
}