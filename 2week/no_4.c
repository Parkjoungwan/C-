#include <stdio.h>
#include <stdlib.h>

int main() {
	//��Ʈ���� ������
	int x = 9; //1001
	int y = 10; //1010
	
	printf("��Ʈ AND = %08X\n", x&y);//1000
	printf("��Ʈ OR = %08X\n", x|y);//1011
	printf("��Ʈ XOR = %08X\n", x^y);//0011
	printf("��Ʈ NOT = %08X\n", ~x);//0110
	printf("��Ʈ << = %08X\n", x << 2);//100100
	printf("��Ʈ >> = %08X\n", x >> 2);//000010

	system("pause");
}