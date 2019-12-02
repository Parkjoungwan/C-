#include <stdio.h>
#include <string.h>

int main() {
	int num;
	char num2[100];
	int result = 0;
	scanf("%d", &num);
	scanf("%s", num2);
	for (int i = 0; i < num; i++) {
		result += num2[i]-'0';
	}
	printf("%d",result);
}