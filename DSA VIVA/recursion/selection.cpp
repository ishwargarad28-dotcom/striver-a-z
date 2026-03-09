#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int index)
{
    // Base case
    if (index == n)
        return;

    // Find minimum element index
    int minIndex = index;
    for (int i = index + 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    // Swap
    swap(arr[index], arr[minIndex]);

    // Recursive call for remaining array
    selectionSort(arr, n, index + 1);
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSort(arr, n, 0);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}