#include <stdio.h>

int main() {
	//3�ڸ� ���� �Է¹��� �� ������ �ڸ����� �и��ϰ� ����ϴ� ���α׷�.
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("���� �ڸ���:%d\n", num / 100);
	printf("���� �ڸ���:%d\n", num / 10 % 10);
	printf("���� �ڸ���:%d\n", num % 10);
	system("pause");
}