#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Traversing array elements:" << endl;
    
    // Using for loop
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using while loop
    int j = 0;
    while (j < size) {
        cout << arr[j] << " ";
        j++;
    }
    cout << endl;

    // Using for-each loop (C++11 and above)
    for (int value : arr) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
