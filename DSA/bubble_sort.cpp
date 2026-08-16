#include<iostream>
using namespace std;
int main(){
  int size,temp;
  cout<<"Enter the array size : ";
  cin>>size;
  cout<<"Enter the array elements : ";
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  for(int i=0;i<size-1;i++){
   temp=arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=temp;
  }
  cout<<"Array after swapping : ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}