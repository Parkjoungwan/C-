#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
} p1;


int main() {
	//struct Person p1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");

	struct Person p2 = { "��浿", 40, "����� ���ʱ� ������"};

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n\n", p1.address);
	printf("�̸�: %s\n", p2.name);
	printf("����: %d\n", p2.age);
	printf("�ּ�: %s\n", p2.address);
	
	return 0;
}
