#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 32, 67, 89, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxNum = arr[0]; // assume first element is max

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    cout << "Highest number in array: " << maxNum << endl;
    return 0;
}
