#include <stdio.h>
#include <stdlib.h>
void main() {
	short a=32768;
	int b=2147483647;
	long c= 2147483647;

	float d = 1.2E38;
	double e = 1.8E307;
	
	printf("¼ö==============================================================================\n");
	printf("%d\n%d\n%d\n\n%.3lf\n\n%.3lf\n\n", a, b, c, d, e);

	char f = 'A';
	char g[11] = "Helloworld";

	printf("¹®ÀÚ============================================================================\n");
	printf("%c\n%s\n\n", f, g);
	system("pause");
} 