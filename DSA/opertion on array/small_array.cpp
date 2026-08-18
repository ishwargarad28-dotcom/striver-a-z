#include<iostream>
#include<Climits>
using namespace std;
int main(){
  int arr[]={12,34,56,7,9};
  int size=5;
  int smallest = INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<smallest){
      smallest=arr[i];
    }
  }
  cout<<"smallest : "<<smallest<<endl;
  return 0;
}
