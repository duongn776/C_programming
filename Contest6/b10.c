#include <stdio.h>

// Hàm trộn 2 mảng con đã được sắp xếp
void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1; // số phần tử nửa trái
    int n2 = r - m;     // số phần tử nửa phải
    
    int L[n1], R[n2];

    // copy dữ liệu vào mảng tạm L và R
    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    // trộn 2 mảng con vào lại a[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    // copy các phần tử còn lại (nếu có)
    while (i < n1)
        a[k++] = L[i++];
    while (j < n2)
        a[k++] = R[j++];
}

// Hàm merge sort
void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;

        mergeSort(a, l, m);     // sắp xếp nửa trái
        mergeSort(a, m + 1, r); // sắp xếp nửa phải

        merge(a, l, m, r);      // trộn 2 nửa
    }
}

int even[1000001], odd[1000001];

int main() {
    int n;
    scanf("%d", &n);

    int evenIndex = 0, oddIndex = 0;
    for (int i = 0; i < n; i++)
    {
    	int x;
    	scanf("%d", &x);

    	if (x % 2 == 0) {
    		even[evenIndex++] = x;
    	}else {
    		odd[oddIndex++] = x;
    	}
    }
    mergeSort(even, 0, evenIndex - 1);
    mergeSort(odd, 0, oddIndex - 1);

    for (int i = oddIndex - 1; i >= 0; i--)
    {
    	printf("%d ", odd[i]);
    }

    for (int j = 0; j < evenIndex; j++)
    {
    	printf("%d ", even[j]);
    }
    return 0;
}
