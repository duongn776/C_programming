#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long factorial = 1;
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (i > 0) factorial *= i;
		sum += 1.0 / factorial;
	}

	printf("%.4lf\n", sum);
}