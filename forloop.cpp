#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // Loop from 1 to num, decreasing by 2
    for (int i = 1; i <= num; i += 2) {
        cout << i << " ";
    }

    return 0;
}
