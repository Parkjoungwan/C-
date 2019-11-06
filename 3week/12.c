#include <stdio.h>
#include <stdlib.h>
void show_digit(int x)
{
	int y;
	y = x / 10;
	if (y > 0) {
		show_digit(y);
	}
	printf("%d ", x % 10);
	return;
}

int main() {
	int x;
	scanf("%d", &x);
	show_digit(x);
	system("pause");
}