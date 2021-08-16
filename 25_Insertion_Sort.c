#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, j;
    // 1 3 5 | 4 8 2 1 0 9
    for (j = 1; j < n; j++)
    {
        i = j - 1;
        int key = arr[j];
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}

int main()
{
    int i;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    insertionSort(arr, n);
    printf("Array after sorting \n");
    for(i = 0 ; i <n; i++)
        printf("%d ", arr[i]);
}