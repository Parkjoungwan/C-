#include <stdio.h>
#include <stdlib.h>

int main() {
	int grade[5];
	//int grade[5]={10,20,30,40,50};
	//int grade[5]={0,};
	int sum = 0;
	int i, average;

	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력:");
		scanf("%d", &grade[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum += grade[i];
	}

	average = sum / 5;
	printf("성적 평균=%d\n", average);
	system("pause");
}