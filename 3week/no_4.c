#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, r;
	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d%d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);
	system("pause");

}