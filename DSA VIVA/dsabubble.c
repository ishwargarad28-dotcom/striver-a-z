#include <stdio.h>
int main()
{
    float arr[10] = {8.12, 5.67, 9.22, 6.55, 7.88, 5.03, 9.93, 6.79, 8.50, 7.14};
    float temp,key;
    int high, low,mid;
    int n=10,i, j;
    int found=0;
    printf("Original roll no :\n");
    for (i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    printf("asending order no :\n");
    for (i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");
    printf("enter the element search :");
    scanf("%f ", &key);
    low = 0;
    high = n - 1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("element found :%f\n", key);
            found=1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(!found){
        printf("not found");
    }
}
