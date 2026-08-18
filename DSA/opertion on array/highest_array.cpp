#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[]={34,67,44,56,89,65};
  int size=6;
  int highest = INT_MIN;
  for(int i=0;i<size;i++){
    if(arr[i]>highest){
      highest=arr[i];
    }
  }
cout<<"Highest number in array : "<<highest<<endl;
return 0;
}
