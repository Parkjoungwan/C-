#include <stdio.h>
#include <stdlib.h>

int main() {
	//비트단위 연산자
	int x = 9; //1001
	int y = 10; //1010
	
	printf("비트 AND = %08X\n", x&y);//1000
	printf("비트 OR = %08X\n", x|y);//1011
	printf("비트 XOR = %08X\n", x^y);//0011
	printf("비트 NOT = %08X\n", ~x);//0110
	printf("비트 << = %08X\n", x << 2);//100100
	printf("비트 >> = %08X\n", x >> 2);//000010

	system("pause");
}