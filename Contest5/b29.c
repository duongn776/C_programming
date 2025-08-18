#include<stdio.h>
#include<math.h>

int mark[1000001] = {0};
int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	int maxVal = -1e9;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		mark[a[i]]++;
		maxVal = fmax(maxVal, a[i]);
	}
	
	int bestVal = -1e9, bestFreq = -1;
	for (int i = 0; i <= maxVal; i++)
	{
		if (mark[i] > bestFreq)
		{
			bestFreq = mark[i];
			bestVal = i;
		}else if (mark[i] == bestFreq && bestFreq > 0)
		{
			bestVal = fmin(bestVal, i);
		}
	}

	printf("%d %d", bestVal, bestFreq);
}