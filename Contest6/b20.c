#include<stdio.h>
#include<math.h>

#define ll long long
int cnt[1000001];

int main()
{
	int n;
	scanf("%d", &n);

	int maxVal = -1e9;

	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		cnt[x]++;
		maxVal = fmax(maxVal, x);
	}

	ll ans = 0;
	for (int i = 0; i <= maxVal; i++)
	{
		if (cnt[i] != 0)
		{
			ans += 1ll * cnt[i] * (cnt[i] - 1) / 2;
		}
	}
	printf("%lld", ans);
}
