#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
} p1;


int main() {
	//struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	struct Person p2 = { "고길동", 40, "서울시 서초구 반포동"};

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n\n", p1.address);
	printf("이름: %s\n", p2.name);
	printf("나이: %d\n", p2.age);
	printf("주소: %s\n", p2.address);
	
	return 0;
}
