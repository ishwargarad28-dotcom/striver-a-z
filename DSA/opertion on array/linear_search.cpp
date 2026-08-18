#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
  for(int i=0;i<size;i++){
    if(arr[i]=target){
      return i;
    }
  }
  return -1;
}
int main(){
  int arr[]={34,54,67,89,30};
  int size=5;
 int target=34;
  cout<<"Linear search found at index : "<<linearsearch(arr,size,target)<<endl;
}