#include <stdio.h>
#include <stdlib.h>
int compute_sum(int n);

int main() {
	int n, sum;
	scanf("%d", &n);

	sum = compute_sum(n);
	printf("1���� %d������ ����: %d\n", n, sum);
	system("pause");
	return 0;
}

int compute_sum(int n) {
	int result = 0;
	for (i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}