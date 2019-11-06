#include <stdio.h>
#include <stdlib.h>


int main() {
	int x;
	int count = 0;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		if (i < 10)
		{
			count++;
		}
		else if (i < 100)
		{
			count++;
		}
		else if (i < 1000)
		{
			if (((i / 100) - (i / 10 % 10)) == ((i / 10 % 10) - (i % 10)))
				count++;
		}

	}
	printf("%d", count);
	system("pause");
}