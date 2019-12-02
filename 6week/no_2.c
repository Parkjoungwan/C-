#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};


int main() {
	struct Person A[3];
	struct Person * B[3];
	B[0] = &A[0];
	B[1] = &A[1];
	B[2] = &A[2];
	for (int i = 0; i < 3; i++)
	{
		scanf("%s", &A[i].name);
		scanf("%d", &A[i].age);
		scanf("%s", &A[i].address);
	}
	for (int j = 0; j < 3; j++)
	{
		printf("%s\n%d\n%s\n", A[j].name, A[j].age, A[j].address);
	}
	for (int j = 0; j < 3; j++)
	{
		printf("%s\n%d\n%s\n", (*B[j]).name, B[j]->age, B[j]->address);
	}

	return 0;
}