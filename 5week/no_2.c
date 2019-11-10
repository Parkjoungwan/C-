#include <stdio.h>
int SIZE = 5;
void swap(int *a, int size)
{
	int i, j;
	int temp;
	for (i = size - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//버블정렬
}

int main() {

	int a[5] = { 3,4,2,5,1 };
	swap(a, SIZE);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}