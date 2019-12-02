#include <stdio.h>
#include <stdlib.h>

int main() {
	int repeat;
	int student_num;
	int sum = 0;
	double average;
	int count = 0;
	double overaverage;
	scanf("%d", &repeat);
	int student_grade[10000];
	for (int a = 0; a < repeat; a++) {
		scanf("%d", &student_num);
		for (int b = 0; b < student_num; b++) {
			scanf("%d", &student_grade[b]);
			sum += student_grade[b];
		}
		average = (double)sum / (double)student_num;

		for (int c = 0; c < student_num; c++) {
			if (average < student_grade[c])
				count++;
		}
		overaverage = (double)count / (double)student_num * 100;
		count = 0;
		sum = 0;
		average = 0;
		printf("%.3lf%%\n", overaverage);
	}
	system("pause");
}
//int main() {
//	//4344
//	int cas;
//	double sn;
//	double sc[1000];
//	double sum[1000] = { 0, };
//	double resultaver[1000];
//	double resultper[1000];
//	double count;
//	scanf("%d", &cas);
//	int j = 0;
//	while (cas != j) {
//		count = 0;
//		scanf("%lf", &sn);
//		for (int i = 0; i < sn; i++)
//		{
//			scanf("%lf", &sc[i]);
//			sum[j] += sc[i];
//		}
//		resultaver[j] = sum[j] / sn;
//		for (int i = 0; i < sn; i++)
//		{
//			if (resultaver[j] < sc[i]) {
//				count++;
//			}
//		}
//		resultper[j] = (count / sn * 100);
//		j++;
//	}
//	for (int i = 0; i < cas; i++)
//	{
//		printf("%.3lf\%\n", resultper[i]);
//	}
//	system("pause");
//}