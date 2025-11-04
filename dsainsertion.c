#include <stdio.h>
int main()
{
    int arr[10] = {88, 76, 15, 80, 44, 5, 37, 1, 28, 65};
    int n = 10;
    int i, j, key;
    printf("original roll no :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("original roll no :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}