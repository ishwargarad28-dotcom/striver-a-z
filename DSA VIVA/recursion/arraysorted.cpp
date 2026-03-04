#include<iostream>
using namespace std;
 bool issorted( int arr[], int n ){
    if(n==0||n==1){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    return issorted(arr, n-1);
}
int main(){
    int arr[5]={5,1,4,6,2};
    cout<<issorted(arr,5)<<endl;
    return 0;
}