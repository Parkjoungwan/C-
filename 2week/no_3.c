#include <stdio.h>
#include <stdlib.h>

int main( ) {
	printf("�ΰ��� ������ �Է��Ͻÿ�:");
	int x, y;
	scanf("%d %d", &x, &y);

	//���迬����
	printf("x==y�� �����: %d\n", x == y);
	printf("x!=y�� �����: %d\n", x != y);
	printf("x>y�� �����: %d\n", x > y);
	printf("x<y�� �����: %d\n", x < y);
	printf("x>=y�� �����: %d\n", x >= y);
	printf("x<=y�� �����: %d\n", x <= y);

	//��������
	printf("%d && %d�� �����: %d\n",x,y, x && y);
	printf("%d || %d�� �����: %d\n", x, y, x || y);
	printf("!%d�� �����: %d\n", x, !x);

	//���ǿ�����
	printf("(x>y)?x:y�� ����� %d\n", (x > y) ? x : y);//ū �� ��ȯ
	printf("(x<y)?x:y�� ����� %d\n", (x < y) ? x : y);//���� �� ��ȯ
	

	system("pause");
}