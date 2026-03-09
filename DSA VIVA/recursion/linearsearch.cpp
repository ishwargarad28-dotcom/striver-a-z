#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int i){
    // Base case
    if(i == n){
        return -1;   // element not found
    }

    // If element found
    if(arr[i] == key){
        return i;    // return index
    }

    // Recursive call
    return linearSearch(arr, n, key, i+1);
}

int main(){
    int arr[5] = {2, 4, 6, 8, 10};
    int key = 10;

    int result = linearSearch(arr, 5, key, 0);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;

    return 0;
}