#include<stdio.h>
int main(){
  int arr[5]={45,65,2,3,25};
  int key;
  int found=0;
  printf("Enter the key : ");
  scanf("%d",&key);
  for(int i=0;i<5;i++){
    if(arr[i]==key){
      printf("Element found at index : %d",i);
      found=1;
      break;
    }
  }
  if(!found){
    printf("Not found Key element.");
  }
  return 0;
}