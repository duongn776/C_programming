#include<stdio.h>

int main()
{
	int n = 0, a[10000];
	int tmp;
	while (scanf("%d", &tmp) != -1)
	{
		a[n] = tmp;
		++n;
	}

	int cntEven = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0) ++cntEven;
	}

	if (cntEven > n - cntEven) printf("CHAN");
	else if (cntEven < n - cntEven) printf("LE");
	else printf("CHANLE");
}