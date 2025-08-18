#include<stdio.h>
#include<math.h>


int cnt[10000001] = {0};

void countingSort(int a[], int n)
{
	int k = -1e9;
	for (int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
		k = fmax(k, a[i]);
	}

	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j < cnt[i]; j++)
		{
			printf("%d ", i);
		}
	}
}

int main() {
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);

    countingSort(a, n);

}