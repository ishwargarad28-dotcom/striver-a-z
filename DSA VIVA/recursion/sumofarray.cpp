#include<iostream>
using namespace std;

int sumArray(int arr[], int n){

    // Base condition
    if(n == 0){
        return 0;
    }

    // Recursive call
    return arr[n-1] + sumArray(arr, n-1);
}

int main(){

    int arr[5] = {2,4,6,8,10};

    int result = sumArray(arr,5);

    cout<<"Sum = "<<result;

    return 0;
}