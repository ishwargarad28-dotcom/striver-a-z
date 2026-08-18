#include<iostream>
using namespace std;
int reverseArray(int arr[],int size){
  int start=0;
  int end = size -1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++,end--;
  }
}
int main(){
  int arr[]={5,3,6,7,8,9};
  int size=6;
  reverseArray(arr,size);
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}