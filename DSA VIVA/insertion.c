#include <stdio.h>
int main()
{
    int arr[20], size, choice, pos, value, search, found;
    printf("enter the array size :");
    scanf("%d", &size);
    printf("enter the array elements :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("1.insertion\n");
        printf("2.deieation\n");
        printf("3.search\n");
        printf("4.update\n");
        printf("5.display\n");
        printf("6.exit\n");

        printf("enter the choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter the position :");
            scanf("%d", &pos);
            printf("enter the elements :");
            scanf("%d", &value);

            if (pos < 1 || pos > size + 1)
            {
                printf("invalid position");
            }
            else
            {
                for (int i = size; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = value;
                size++;
                printf("elements insert succesfully--!!!");
            }
        case 2:
            printf("enter the position :");
            scanf("%d", &pos);
            printf("enter the deleate value :");
            scanf("%d", &value);
            if (pos < 1 || pos > size)
            {
                printf("invalid position --!!");
            }
            else
            {
                for (int i = pos - 1; i < size - 1; i--)
                {
                    arr[i] = arr[i - 1];
                }
                size--;
                printf("elements successfully deleated ");
            }
        case 3:
            printf("enter the elements search :");
            scanf("%d", &search);
            found = 0;
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == search)
                {
                    printf("enter the elements position %d\n:", i + 1);
                    found == 1;
                    break;
                }
            }
            if (!found)
            {
                printf("not found");
                break;
            }
        case 4: // Update
            printf("Enter position to update (1 to %d): ", size);
            scanf("%d", &pos);
            if (pos < 1 || pos > size)
            {
                printf("Invalid position!\n");
            }
            else
            {
                printf("Enter new value: ");
                scanf("%d", &value);
                arr[pos - 1] = value;
                printf("Element updated successfully!\n");
            }
            break;
        case 5:
            printf("Array elements: ");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        }
    }
}