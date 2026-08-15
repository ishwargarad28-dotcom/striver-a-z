#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"Enter the Array size : ";
  cin>>size;
  cout<<"Enter the Array element : ";
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int key;
  int found=0;
  cout<<"Enter the key : ";
  cin>>key;
  int low=0;
  int high=size-1;
  while(low<=high){
   int mid=(high+low)/2;
   if(key<arr[mid]){
    high=mid-1;
   }
   else if(key>arr[mid]){
    low=mid+1;
   }
   else{
    cout<<"Element found at index : "<<mid<<"\n";
    found=1;
    break;
   }
  }
  if(!found){
    cout<<"Not found element in array .";
  }
}