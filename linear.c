#include<stdio.h>
int main(){
  int size,num,found=0;
  printf("Enter the array size : ");
  scanf("%d",&size);
  printf("Enter the Array elements : ");
   int arr[size];
   for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }
   int key;
   printf("Enter the search Element : ");
   scanf("%d",&key);
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      printf("Element found at index : %d",i);
      found=1;
      break;
    }
  }
  if(!found){
    printf("Not found element .");
  }
return 0;
}