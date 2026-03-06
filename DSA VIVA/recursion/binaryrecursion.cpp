#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key){
    
    if(left > right){
        return -1; // element not found
    }

    int mid = (left + right) / 2;

    if(arr[mid] == key){
        return mid; // element found
    }
    
    else if(key < arr[mid]){
        return binarySearch(arr, left, mid - 1, key);
    }
    
    else{
        return binarySearch(arr, mid + 1, right, key);
    }
}

int main(){
    int arr[] = {2,4,6,8,10,12};
    int n = 6;
    int key = 8;

    int result = binarySearch(arr, 0, n-1, key);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;

    return 0;
}