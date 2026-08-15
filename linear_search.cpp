#include <iostream>
using namespace std;

int main() {
    int size, key;
    bool found = false;

    cout << "Enter the array size : ";
    cin >> size;

    int array[size];

    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter the key : ";
    cin >> key;

    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            cout << "Element found at index : " << i << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Element not found";
    }

    return 0;
}