#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("1���� 600������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	if (num >= 0 && num <= 200)
		printf("num�� 0�� 200���̿� �ֽ��ϴ�.\n");
	else if (num >= 201 && num <= 400)
		printf("num�� 201�� 400���̿� �ֽ��ϴ�.\n");
	else if (num >= 401 && num <= 600) {
		if (num == 444)
			printf("444!!\n");
		printf("num�� 401�� 600���̿� �ֽ��ϴ�.\n");
	}
	else
		printf("0�� 1000������ ������ �ƴմϴ�.\n");
	system("pause");
	//���� �Է��� ���� 111,222�� ���� �� ���ڰ� �ݺ��� ��� ����϶�.
}