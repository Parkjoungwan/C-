#include <stdio.h>
#include <stdlib.h>
//baekjoon 2675
int main() {
	int T;
	scanf("%d", &T);
	char S[21];
	int P;
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &P);
		scanf("%s", &S);
		for (int j = 0; S[j] != '\0'; j++)
		{
			for (int k = 0; k < P; k++)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}