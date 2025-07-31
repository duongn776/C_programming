/*
Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int isFound = 0;
	for (int i = 1; i <= n; i++)
	{
		int x; scanf("%d", &x);

		if (x == 2022)
		{
			isFound = 1; 
			break;
		}
	}
	if (isFound == 1)
	{
		printf("YES");
	}else {
		printf("NO");
	}
}