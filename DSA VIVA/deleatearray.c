#include <stdio.h>
int main()
{
    int arr[20], size, position;
    printf("enter the size of array :");
    scanf("%d", &size);
    printf("enter theelements of an array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the position to deleate :");
    scanf("%d", &position);
    for (int i = position - 1; i < size - 1; i++)
    {
        arr[i ] = arr[i+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
