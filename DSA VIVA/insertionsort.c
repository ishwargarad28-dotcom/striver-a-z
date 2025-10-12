#include <stdio.h>
int main()
{
    int arr[20], size, temp, j;
    printf("enter the array size :");
    scanf("%d", &size);
    printf("enter the array element ;");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}