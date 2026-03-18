#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, i, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}