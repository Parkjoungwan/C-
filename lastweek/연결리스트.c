#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

typedef struct node {
	char  *name;
	struct node *link;
} node;
node *head = NULL, *new_node = NULL, *temp = NULL;
main() {
	int num = 0;
	char *pname = NULL;
	new_node = (node *)malloc(sizeof(node));
	if (new_node == NULL) {
		printf("memory allocation error\n");
	};
	printf("head�� �ּҰ�=%d, new_node�� �ּҰ�=%d, temp�� �ּҰ�=%d\n", &head, &new_node, &temp);
	printf("1�� �̸��� �Է��Ͻÿ�: ");
	pname = malloc(sizeof(char) * 10);    // char 10�� ũ�⸸ŭ ���� �޸� �Ҵ�
	scanf("%s", pname);
	new_node->name = pname;
	new_node->link = NULL;
	head = temp = new_node;
	printf("1�� ����� Name= %s, �ּҰ� = %d \n\n", new_node->name, &head->name);

	num = 2;
	while (num < 4)
	{
		new_node = (node *)malloc(sizeof(node));
		if (new_node == NULL) {
			printf("memory allocation error\n");
		}

		printf("%d�� �̸��� �Է��Ͻÿ�: ", num);
		pname = malloc(sizeof(char) * 10);    // char 10�� ũ�⸸ŭ ���� �޸� �Ҵ�
		scanf("%s", pname);
		new_node->name = pname;
		new_node->link = NULL;
		temp->link = new_node;
		printf("%d�� ����� link ��=%d\n", num - 1, temp->link); // link Ȯ��
		printf("%d�� ����� Name= %s, �ּҰ� %d \n\n", num, new_node->name, new_node);
		temp = temp->link;
		num++;
	}
	printf(" head ---> ");
	for (temp = head; temp != NULL; temp = temp->link)
		printf(" %s : %d", temp->name, temp->link);
	printf("\n");
	system("pause");
}