#include<stdio.h>

#define ll long long
void merge(ll a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    ll Left[n1], Right[n2];
    for (int i = 0; i < n1; i++)
        Left[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        Right[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j]) a[k++] = Left[i++];
        else a[k++] = Right[j++];
    }
    while (i < n1) a[k++] = Left[i++];
    while (j < n2) a[k++] = Right[j++];
}

void mergeSort(ll a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        a[i] = a[i] * a[i]; // bình phương trước
    }

    mergeSort(a, 0, n - 1);

    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0, r = i - 1;
        while (l < r)
        {
            ll sum = a[l] + a[r];
            if (sum == a[i])
            {
                printf("YES\n");
                return 0;
            }
            else if (sum < a[i]) l++;
            else r--;
        }
    }
    printf("NO\n");
}
