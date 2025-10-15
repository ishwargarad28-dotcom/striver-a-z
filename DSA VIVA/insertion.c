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
    printf("enter the insert num :");
    scanf("%d", &num);
    printf("enter the position :");
    scanf("%d", &position);
    for (int i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[position-1]=num;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}
