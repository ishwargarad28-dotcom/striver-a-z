#include <stdio.h>
int main()
{
    int array[20], size, num;
    int position = -1;
    printf("enter the size of array :");
    scanf("%d", &size);
    printf("enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("enter the element search :");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            position = i;
            break;
        }
    }
    if (position != -1)
    {
        printf(" num is an array %d and position is %d", num, position + 1);
    }
    else
    {
        printf(" num not in array %d", num);
    }
    return 0;
}