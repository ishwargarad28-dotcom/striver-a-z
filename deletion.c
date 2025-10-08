#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter the position (1 to %d) to delete: ", n);
    scanf("%d", &pos);

    // Check for valid position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements left from the position
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease array size

        // Display array after deletion
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
