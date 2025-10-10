#include<stdio.h>
int main()
{
int arr[20],size,num,position;
printf("enter the size of an array :");
scanf("%d",&size);
printf("enter the elements of array :");
scanf("%d",&size);
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("enter inesrt the element :");
scanf("%d",&num);
printf("enter the position :");
scanf("%d",&position);

for(int i=size-1;i>=position;i--){
    arr[i+1]=arr[i];
}
arr[position]=num;
size++;
printf("array of insertion :");
for(int i=0;i<size;i++){
printf("%d",arr[i]);
}
return 0;
}