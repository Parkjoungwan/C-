#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[10];
	int *arr_2;
	int i;
	int *temp;
	for (i = 0; i < 10; i++)
	{
		arr_1[i] = i + 1;
	}
	arr_2 = (int *)calloc(6, sizeof(int));
	temp = arr_2;
	for (i = 0; i < 5; i++)
	{
		arr_2[i] = arr_1[i];
		printf("%d", arr_2[i]);
	}
	printf("\n");
	
	arr_2=(int*)realloc(arr_2, sizeof(int) * 10);//realloc�� ����ϸ� ������ heap ������ �ִ� �Ҵ�� �޸𸮴� �����͸� �Ұ� �ǰ� �� �����ʹ� heap������ ��ĥ �� �ִ�. 
	
	for (i = 0; i < 10; i++)
	{
		arr_2[i] = arr_1[i];
		printf("%d", arr_2[i]);
	}
	free(arr_2);
	system("pause");
}