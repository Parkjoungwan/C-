#include <stdio.h>
#include <stdlib.h>

long factorial(int n);

int main() {
	int x = 0;
	long f;
	scanf("%d", &x);
	f = factorial(x);
	printf("%d!은 %d입니다.\n", x, f);
	system("pause");
	return 0;
}

long factorial(int n)
{
	printf("factorial (%d)\n", n);
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}