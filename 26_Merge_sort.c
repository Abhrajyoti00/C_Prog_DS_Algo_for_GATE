#include <stdio.h>
#include <math.h>
void Merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 2], R[n2 + 2];
    int i, j;
    for (i = 1; i < n1; i++)
        L[i] = arr[p + i - 1];
    for (i = 1; i < n2; i++)
        R[i] = arr[q + j];
    L[n1 + 1] = __INT_MAX__;
    R[n2 + 1] = __INT_MAX__;
    i = j = 1;
    for (int k = p; k < r; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i += 1;
        }
        else
        {
            arr[k] = R[j];
            j += 1;
        }
    }
}
void MergeSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (int)floor((p + q) / 2);
        MergeSort(arr, p, q);
        MergeSort(arr, q + 1, r);
        Merge(arr, p, q, r);
    }
}

int main()
{
    int i;
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    MergeSort(arr, 1, n);
    printf("Array after sorting \n");
    for (i = 1; i <= n; i++)
        printf("%d ", arr[i]);
}