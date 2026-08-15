#include<iostream>
using namespace std;
int main(){
  int size;
  int found=0;
  cout<<"Enter the array size : ";
  cin>>size;
  cout<<"Enter the array element : ";
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int key;
  cout<<"Enter the element search : ";
  cin>>key;
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      cout<<"Element found at index : "<<i<<"\n";
      found=1;
      break;
    }
  }
  if(!found){
    cout<<"Key is a not found. ";
  }
  return 0;
}
