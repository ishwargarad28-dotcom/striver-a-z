#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50}; // initial array with size 5
    int size = 5;   // current number of elements
    int pos, value;

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Enter position (1-based index) to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    if (pos < 1 || pos > size + 1) {
        cout << "Invalid position!" << endl;
    } else {
        // shift elements to the right
        for (int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value; // insert new element
        size++;

        cout << "Array after insertion: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
