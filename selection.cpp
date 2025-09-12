#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i; // assume the minimum is at position i
        for (int j = i + 1; j < n; j++) { // check remaining part of the array
            if (arr[j] < arr[mini]) {
                mini = j; // update index of smaller element
            }
        }
        // swap arr[mini] and arr[i]
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    
}

int main() {
    int n;
    cin >> n; // number of elements

    int arr[n];
    for (int i = 0; i < n; i++) 
    cin >> arr[i]; // input array

  selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}