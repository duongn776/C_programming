#include<stdio.h>

int binarySearch(int a[], int n, int x)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x) return m;
		else if (a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}

int main() {
    int a[] = {1, 2, 4, 8, 10, 12, 15};
    int n = sizeof(a)/sizeof(a[0]);

    int x = 10;
    int pos = binarySearch(a, n, x);
    if (pos != -1) printf("Tim thay %d tai vi tri %d\n", x, pos);
    else printf("Khong tim thay %d\n", x);


    return 0;
}