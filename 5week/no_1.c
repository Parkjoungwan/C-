#include <stdio.h>

int main() {
	int *k;
	int ko;
	k = &ko;
	ko = 3;
	printf("k�� ��: %d, ko�� �ּ� ��%d\n", k, &ko);
	printf("k�� ����Ű�� �ִ� ��: %d, ko ��%d", *k, ko);
}