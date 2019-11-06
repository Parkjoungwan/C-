#include <stdio.h>

int main() {
	//4344
	int cas;
	double sn;
	double sc[1000];
	double sum[1000] = { 0, };
	double resultaver[1000];
	double resultper[1000];
	double count;
	scanf("%d", &cas);
	int j = 0;
	while (cas != j) {
		count = 0;
		scanf("%lf", &sn);
		for (int i = 0; i < sn; i++)
		{
			scanf("%lf", &sc[i]);
			sum[j] += sc[i];
		}
		resultaver[j] = sum[j] / sn;
		for (int i = 0; i < sn; i++)
		{
			if (resultaver[j] < sc[i]) {
				count++;
			}
		}
		resultper[j] = (count / sn * 100);
		j++;
	}
	for (int i = 0; i < cas; i++)
	{
		printf("%.3lf\%\n", resultper[i]);
	}
	system("pause");
}