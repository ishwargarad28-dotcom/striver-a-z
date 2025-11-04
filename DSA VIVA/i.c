#include <stdio.h>
int main()
{
    float arr[10] = {8.12, 5.67, 9.22, 6.55, 7.88, 5.03, 9.93, 6.79, 8.50, 7.14};
    int n = 10;
    float temp;
    int i, j;

    printf("Original roll no:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++)          // <-- FIXED: use '<', not '='
    {
        for (j = 0; j < n - i - 1; j++)  // <-- FIXED: use '<', not '='
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nAscending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
