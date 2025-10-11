#include <stdio.h>
int main()
{
    int array[20], size, num, position;
    printf("enter the size of an array :");
    scanf("%d", &size);
    printf("enter the elements in an arrray :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("elements in an array :");
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
    }
}